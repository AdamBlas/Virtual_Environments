using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class WolfAI : MonoBehaviour
{
    public float runRadius = 50f;
    public float walkRadius = 20f;
    public float attackRadius = 3f;

    public float runSpeed = 10f;
    public float walkSpeed = 5f;
    public float attackSpeed = 50f;

    Transform target;
    NavMeshAgent agent;
    Animator animator;

    void Start()
    {
        target = GameObject.FindGameObjectWithTag("Player").transform;
        agent = GetComponent<NavMeshAgent>();
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        float distance = Vector3.Distance(target.position, this.transform.position);

        if (distance <= runRadius)
        {
            if (distance <= walkRadius)
            {
                if (distance <= attackRadius)
                {
                    animator.SetTrigger("Attack");
                    agent.speed = attackSpeed;
                }
                else
                {
                    animator.SetTrigger("Walk");
                    agent.speed = walkSpeed;
                }
            }
            else
            {
                animator.SetTrigger("Run");
                agent.speed = runSpeed;
            }

            agent.SetDestination(target.position);

            Vector3 dir = (target.position - transform.position).normalized;
            Quaternion lookRot = Quaternion.LookRotation(new Vector3(dir.x, 0, dir.z));
            transform.rotation = Quaternion.Slerp(transform.rotation, lookRot, Time.deltaTime * 10);
            Vector3 eul = transform.rotation.eulerAngles;
            transform.rotation = Quaternion.Euler(eul.x + 90, eul.y + 90, eul.z);
        }
    }
}
