using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TimerManager : MonoBehaviour
{
    [SerializeField]
    private Text zamanText;
    int kalanSure = 90;

    GameManager gameManager;

    private void Awake()
    {
        gameManager = Object.FindObjectOfType<GameManager>();

        
    }
    void Start()
    {
        StartCoroutine(Zaman());
    }

    IEnumerator Zaman()
    {

        for (int i = kalanSure; i > 0; i--)
        {

            if (i < 10)
            {
                zamanText.text = "0" + i.ToString();
            }
            else
            {
                zamanText.text = i.ToString();
            }
            yield return new WaitForSeconds(1);
        }
        zamanText.text = "";
        gameManager.OyunuBitir();

    }
}
