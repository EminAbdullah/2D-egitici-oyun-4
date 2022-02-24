using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using UnityEngine.SceneManagement;
public class SonucManager : MonoBehaviour
{
    [SerializeField]
    private Image sonucImage;
    [SerializeField]
    private Text dogruText, yanlisText, puanText;
    [SerializeField]
    private GameObject tekrarOynaBttn, menuyaDonBttn;
    float Sure;
    bool AcilsinMi;

    GameManager gameManager;
    private void Awake()
    {
        gameManager = Object.FindObjectOfType<GameManager>();
    }
    private void OnEnable()
    {
        dogruText.text = "";
        yanlisText.text = "";
        puanText.text = "";
        Sure = 0;
        AcilsinMi = true;

        tekrarOynaBttn.GetComponent<RectTransform>().localScale = Vector3.zero;
        menuyaDonBttn.GetComponent<RectTransform>().localScale = Vector3.zero;

        StartCoroutine(resimAcilsinMiRoutine());
    }
   

    IEnumerator resimAcilsinMiRoutine()
    {

        while (AcilsinMi)
        {
            Sure += 0.15f;
            sonucImage.fillAmount += Sure;
            yield return new WaitForSeconds(0.15f);
            if (Sure>=1)
            {
                Sure=1;
                AcilsinMi = false;
                dogruText.text = gameManager.dogruAdet.ToString() + " DOÐRU";
                yanlisText.text = gameManager.yanlisAdet.ToString() + " YANLIÞ";
                puanText.text = gameManager.toplamPuan.ToString() + " PUAN";
                tekrarOynaBttn.GetComponent<RectTransform>().DOScale(1, 0.3f);
                menuyaDonBttn.GetComponent<RectTransform>().DOScale(1, 0.3f);

            }
        }

    }

    public void TekrarOyna()
    {

        SceneManager.LoadScene("GameLevel");

    }
    public void AnaMenuyeDon()
    {

        SceneManager.LoadScene("MenuLevel2");
    }
}
