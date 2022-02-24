using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
public class circleRotateManager : MonoBehaviour
{
    GameManager gameManager;
    string hangiSonuc;
    private void Awake()
    {
        gameManager = GameObject.FindObjectOfType<GameManager>();
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag=="mermi")
        {
           gameObject.transform.DORotate(transform.eulerAngles + Quaternion.AngleAxis(45, Vector3.forward).eulerAngles, 0.5f);

            //Vector3.forward = new Vector3(0, 0, 1); demek oluyo

            if (collision.gameObject!=null)
            {
                Destroy(collision.gameObject);
            }

            if (gameObject.name == "solDaire")
            {
                hangiSonuc = GameObject.Find("SolText").GetComponent<Text>().text;
            }
            else if (gameObject.name == "ortaDaire")
            {
                hangiSonuc = GameObject.Find("OrtaText").GetComponent<Text>().text;
            }
            else if (gameObject.name == "sagDaire")
            {
                hangiSonuc = GameObject.Find("SagText").GetComponent<Text>().text;
            }

            gameManager.SonucuKontrolEt(int.Parse(hangiSonuc));
                
        }
    }
}
