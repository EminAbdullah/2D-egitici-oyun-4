using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private GameObject baslaImage;

    string hangiOyun;
    int birinciCarpan,ikinciCarpan;

    int dogruSonuc;
    int yanlisSonuc1, yanlisSonuc2;
    public int dogruAdet, yanlisAdet, toplamPuan;
    [SerializeField]
    private GameObject dogruImage, yanlisImage;

    [SerializeField]
    private Text dogruAdetText, yanlisAdetText, puanText;

    [SerializeField]
    private Text soruText,solText,ortaText,sagText;

    PlayerManager playerManager;
    [SerializeField]
    private GameObject sonucPanel,sonuclar,zamanImage,dogruYanlisImage,puanPanel;

    private void Awake()
    {
        
        playerManager = Object.FindObjectOfType<PlayerManager>();
    }
    void Start()
    {
        puanPanel.SetActive(true);
        sonuclar.SetActive(true);
        zamanImage.SetActive(true);
        dogruYanlisImage.SetActive(true);
        sonucPanel.SetActive(false);
        dogruAdet = 0;
        yanlisAdet = 0;
        toplamPuan = 0;

        dogruImage.GetComponent<RectTransform>().localScale = Vector3.zero;
        yanlisImage.GetComponent<RectTransform>().localScale = Vector3.zero;

        if (PlayerPrefs.HasKey("hangiOyun"))
        {
            hangiOyun = PlayerPrefs.GetString("hangiOyun");
        }
        StartCoroutine(baslaYazRoutine());
    }

    IEnumerator baslaYazRoutine()
    {
        baslaImage.GetComponent<RectTransform>().DOScale(1.3f, 0.5f);
        yield return new WaitForSeconds(0.6f);
        baslaImage.GetComponent<RectTransform>().DOScale(0, 0.5f).SetEase(Ease.InBack);
        baslaImage.GetComponent<CanvasGroup>().DOFade(0, 0.5f);
        yield return new WaitForSeconds(0.6f);

        oyunaBasla();
    }


    void oyunaBasla()
    {
        playerManager.rotaDegissinMi = true;
        soruyuYazdir();
        

    }
    void birinciCarpaniAyarla()
    {

        switch (hangiOyun)
        {
            case "iki":
                birinciCarpan = 2;
                break;
            case "ü.":
                birinciCarpan = 3;
                break;
            case "dört":
                birinciCarpan = 4;
                break;
            case "beþ":
                birinciCarpan = 5;
                break;
            case "altý":
                birinciCarpan = 6;
                break;
            case "yedi":
                birinciCarpan = 7;
                break;
            case "sekiz":
                birinciCarpan = 8;
                break;
            case "dokuz":
                birinciCarpan = 9;
                break;
            case "on":
                birinciCarpan = 10;
                break;
            case "karýþýk":
                birinciCarpan = Random.Range(2,11);
                break;
            default:
                break;
        }
        

    }

    void soruyuYazdir()
    {
        birinciCarpaniAyarla();
        ikinciCarpan = Random.Range(2, 11);

        int rastgeleDeger = Random.Range(1, 100);

        if (rastgeleDeger<=50)
        {
            soruText.text = birinciCarpan.ToString() + "x" + ikinciCarpan.ToString();
        }
        else
        {
            soruText.text = ikinciCarpan.ToString() + "x" + birinciCarpan.ToString();
        }
        dogruSonuc = birinciCarpan * ikinciCarpan;
        sonuclariYazdir();
    }

    void sonuclariYazdir()
    {

        yanlisSonuc1 = dogruSonuc + Random.Range(2, 10);

        if (dogruSonuc>10)
        {
            yanlisSonuc2 = dogruSonuc - Random.Range(2, 10);
        }
        else
        {
            yanlisSonuc2 =Mathf.Abs(dogruSonuc - Random.Range(2, 5));
            if (yanlisSonuc2==0)
            {
                yanlisSonuc2 = 1;
            }
        }
        
        int rastgeledeger2 = Random.Range(1, 100);

        if (rastgeledeger2<=33)
        {
            solText.text = dogruSonuc.ToString();
            ortaText.text = yanlisSonuc1.ToString();
            sagText.text = yanlisSonuc2.ToString();
        }
        else if (rastgeledeger2>33 && rastgeledeger2<=66)
        {
            ortaText.text = dogruSonuc.ToString();
            solText.text = yanlisSonuc1.ToString();
            sagText.text = yanlisSonuc2.ToString();
        }
        else
        {
            sagText.text = dogruSonuc.ToString();
            ortaText.text = yanlisSonuc1.ToString();
            solText.text = yanlisSonuc2.ToString();
        }

    }

    public void SonucuKontrolEt(int Sonuc)
    {

        dogruImage.GetComponent<RectTransform>().localScale = Vector3.zero;
        yanlisImage.GetComponent<RectTransform>().localScale = Vector3.zero;
        if (Sonuc==dogruSonuc)
        {
           dogruAdet++;
           toplamPuan += 20;

            dogruImage.GetComponent<RectTransform>().DOScale(1, 0.2f);
            
        }
        else
        {
            yanlisAdet++;
            toplamPuan -= 10;
            if (toplamPuan<=0)
            {
                toplamPuan = 0;
            }
            yanlisImage.GetComponent<RectTransform>().DOScale(1, 0.2f);
        }
        dogruAdetText.text = dogruAdet.ToString() +" DOÐRU";
        yanlisAdetText.text = yanlisAdet.ToString() + " YANLIÞ";
        puanText.text = toplamPuan.ToString() + " PUAN";

        soruyuYazdir();
    }
    public void OyunuBitir()
    {
        sonucPanel.SetActive(true);
        sonuclar.SetActive(false);
        zamanImage.SetActive(false);
        dogruYanlisImage.SetActive(false);
        puanPanel.SetActive(false);

        soruText.text = "";
    }
}
