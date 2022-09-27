using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class HitNumber : MonoBehaviour {
    public AnimationCurve ScaleX;
    public AnimationCurve ScaleY;
    public AnimationCurve TransformY;
    public AnimationCurve Fade;
    public float speed;
    public float scale;
    void OnEnable() {
        StartCoroutine(Animate());
    }

    public void OnDisable() {
        Destroy(gameObject);
    }

    public void Set(string value,Color color,float scale) {
        GetComponent<Text>().text = value;
        GetComponent<Text>().color = color;
        this.scale = scale;
    }

    public IEnumerator Animate() {
        var text = GetComponent<Text>();
        for (int i = 0; i < 10; i++) {
            transform.localScale = new Vector3(ScaleX.Evaluate(i), ScaleY.Evaluate(i), 1);
            transform.localScale *= scale;
            transform.position = new Vector3(transform.position.x, transform.position.y + TransformY.Evaluate(i), 0);
            text.color = new Color(1, 1, 1, Fade.Evaluate(i));
            yield return new WaitForSeconds(speed);
        }
        Destroy(gameObject);
        yield return null;
    }
}