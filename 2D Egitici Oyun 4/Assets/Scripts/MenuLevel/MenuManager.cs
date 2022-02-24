using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    [SerializeField]
    private GameObject soruPanel;

    [SerializeField]
    private AudioSource audioSource;

    [SerializeField]
    private AudioClip buttonClick;

    [SerializeField]
    private GameObject sesPaneli;

    bool sesPaneliAcikMi;
    void Start()
    {
        sesPaneliAcikMi = false;
        sesPaneli.GetComponent<RectTransform>().localPosition = new Vector3(0, -23, 0);

        soruPanel.GetComponent<CanvasGroup>().DOFade(1, 1f).SetEase(Ease.InCirc);
        soruPanel.GetComponent<RectTransform>().DOScale(1, 1f).SetEase(Ease.OutBack);
    }

    public void ikinciLeveleGec()
    {
        if (PlayerPrefs.GetInt("SesDurumu")==1)
        {
            audioSource.PlayOneShot(buttonClick);
        }
        
        SceneManager.LoadScene("MenuLevel2");


    }

    public void AyarlariYap()
    {
        if (PlayerPrefs.GetInt("SesDurumu") == 1)
        {
            audioSource.PlayOneShot(buttonClick);
        }

        if (!sesPaneliAcikMi)
        {
            sesPaneli.GetComponent<RectTransform>().DOLocalMoveY(-100, 0.5f);
            sesPaneliAcikMi = true;
        }
        else if (sesPaneliAcikMi)
        {
            sesPaneli.GetComponent<RectTransform>().DOLocalMoveY(-23, 0.5f);
            sesPaneliAcikMi = false;
        }

    }

    public void oyundanCik()
    {
        if (PlayerPrefs.GetInt("SesDurumu") == 1)
        {
            audioSource.PlayOneShot(buttonClick);
        }
        Application.Quit();
    }

}
