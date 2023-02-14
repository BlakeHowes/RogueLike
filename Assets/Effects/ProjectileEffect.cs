using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.ParticleSystem;

public class ProjectileEffect : MonoBehaviour
{
    public void Fire(Vector3Int position, Vector3Int origin) {
        var offset = new Vector3(0.5f, 1f, 0);
        var pos = new Vector3(position.x + offset.x, position.y+ offset.y,0);
        transform.position = origin + new Vector3(0.5f,1.2f);
        Vector3 Direction = pos - transform.position;
        float angle = Mathf.Atan2(Direction.y, Direction.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        var particle = GetComponent<ParticleSystem>();
        var particleMain = particle.main;
        var life = Life(pos, particleMain);
        particleMain.startLifetime = life;
        particle.Emit(1);
        StartCoroutine(WaitThenDie(life + 10f));
    }

    public IEnumerator WaitThenDie(float waitTime) {
        yield return new WaitForSeconds(waitTime);
        Destroy(gameObject);
    }

    public float Life(Vector3 target, MainModule particleMain) {
        Vector3 Direction = target - transform.position;
        //THIS IS NOT EXACT, I DONT KNOW WHY IT HAS TO BE DIVIDED BY 1.85
        return Vector3.Distance(gameObject.transform.position, target) / particleMain.startSpeed.constant / 1.85f;
    }
}
