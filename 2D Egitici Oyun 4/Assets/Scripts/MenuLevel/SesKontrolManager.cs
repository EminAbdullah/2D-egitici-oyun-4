using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SesKontrolManager : MonoBehaviour
{

    private void Start()
    {
        SesiAc();
    }
    public void SesiAc()
    {
        PlayerPrefs.SetInt("SesDurumu", 1);
    }

    public void SesiKapat()
    {

        PlayerPrefs.SetInt("SesDurumu", 0);
    }
}
