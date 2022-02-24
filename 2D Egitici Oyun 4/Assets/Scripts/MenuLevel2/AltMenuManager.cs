using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class AltMenuManager : MonoBehaviour
{
    [SerializeField]
    private GameObject AltMenuPanel;

    [SerializeField]
    private AudioSource audioSource;
    [SerializeField]
    private AudioClip buttonClick;

    void Start()
    {
        AltMenuPanel.GetComponent<RectTransform>().DOScale(1, 1f).SetEase(Ease.OutCirc);
    }

    public void hangiOyunAcilsin(string hangiOyun)
    {
        if (PlayerPrefs.GetInt("SesDurumu") == 1)
        {
            audioSource.PlayOneShot(buttonClick);
        }
        PlayerPrefs.SetString("hangiOyun", hangiOyun);
        SceneManager.LoadScene("GameLevel");

    }

    public void geriDon()
    {
        if (PlayerPrefs.GetInt("SesDurumu") == 1)
        {
            audioSource.PlayOneShot(buttonClick);
        }
        SceneManager.LoadScene("MenuLevel");
    }
}
