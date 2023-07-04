using System.Collections;
using UnityEngine;

namespace LlamAcademy.Spring.Runtime
{
    public class SpringToTarget3D : BaseSpringBehaviour
    {
        private SpringVector3 spring;
        [HideInInspector]public GameObject healthbar;
        private void Awake()
        {
            spring = new SpringVector3()
            {
                StartValue = transform.position,
                EndValue = transform.position,
                Damping = Damping,
                Stiffness = Stiffness
            };
            TryGetComponent<Stats>(out Stats stats);
            if (stats) { healthbar = stats.healthbar; }
        }

        public void SpringTo(Vector3 targetPosition,float damping, float stiffness)
        {
            targetPosition += new Vector3(0.5f, 0.5f);
            spring.Damping = damping;
            spring.Stiffness = stiffness;
            StopAllCoroutines();


            StartCoroutine(DoSpringToTarget(targetPosition));
        }

        public void SpringToDefaultValues(Vector3 targetPosition) {
            targetPosition += new Vector3(0.5f, 0.5f);
            StopAllCoroutines();

            StartCoroutine(DoSpringToTarget(targetPosition));
        }


        public void Nudge(Vector3 Amount, float damping, float stiffness)
        {
            spring.Damping = damping;
            spring.Stiffness = stiffness;
            if (!gameObject.activeSelf) { return; }
            if (Mathf.Approximately(spring.CurrentVelocity.sqrMagnitude, 0))
            {
                StartCoroutine(HandleNudge(Amount));
            }
            else
            {
                spring.UpdateEndValue(spring.EndValue, spring.CurrentVelocity + Amount);
            }
        }

        private IEnumerator HandleNudge(Vector3 Amount)
        {
            spring.Reset();
            spring.StartValue = transform.position;
            spring.EndValue = transform.position;
            spring.InitialVelocity = Amount;
            Vector3 targetPosition = transform.position;
            transform.position = spring.Evaluate(Time.deltaTime);

            while (!Mathf.Approximately(
                0,
                Vector3.SqrMagnitude(targetPosition - transform.position)
            ))
            {
                transform.position = spring.Evaluate(Time.deltaTime);

                yield return null;
            }

            spring.Reset();
        }

        private IEnumerator DoSpringToTarget(Vector3 TargetPosition)
        {
            if (Mathf.Approximately(spring.CurrentVelocity.sqrMagnitude, 0))
            {
                spring.Reset();
                spring.StartValue = transform.position;
                spring.EndValue = TargetPosition;
            }
            else
            {
                spring.UpdateEndValue(TargetPosition, spring.CurrentVelocity);
            }

            while (!Mathf.Approximately(Vector3.SqrMagnitude(transform.position - TargetPosition), 0))
            {
                transform.position = spring.Evaluate(Time.deltaTime);
                if (healthbar) healthbar.transform.position = transform.position;
                yield return null;
            }

            spring.Reset();
        }
    }
}