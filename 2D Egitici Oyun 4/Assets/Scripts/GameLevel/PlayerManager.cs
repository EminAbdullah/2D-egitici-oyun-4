using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    [SerializeField]
    private Transform gun,mermiYeri;

    [SerializeField]
    private GameObject[] mermiPrefab;

    float angle;
    float donusHizi = 100f;

    float ikiMermiArasiSure = 0.3f;
    float sonrakiAtis;

    public bool rotaDegissinMi;

    [SerializeField]
    private AudioSource audioSource;
    [SerializeField]
    private AudioClip topSesi;
    void Start()
    {
        rotaDegissinMi = false;
    }

    
    void Update()
    {
        if (rotaDegissinMi)
        {
            rotateDegistir();
        }
       
    }

    void rotateDegistir()
    {
        /*
        Vector2 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition) - gun.transform.position;
        angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg - 90f;//arctan yardýmý ile yaptýðý açýyý hesapladýk
        //if bloklarý ile açýsýný kýsýtladýk
        if (angle<=-180 && angle>=-270 || angle>45 && angle<=90)
        {
            angle = 45;
        }
        else if (angle<-45 && angle >-180)
        {
            angle = -45;
        }
        
        Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward);

        gun.transform.rotation = Quaternion.Slerp(gun.transform.rotation, rotation, donusHýzý * Time.deltaTime);
        */
        Vector2 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition) - gun.transform.position;

        angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg - 90f;


        if (angle < 45 && angle > -45)
        {
            Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward);

            gun.transform.rotation = Quaternion.Slerp(gun.transform.rotation, rotation, donusHizi * Time.deltaTime);

        }

        if (Input.GetMouseButtonDown(0))
        {



            if (Time.time > sonrakiAtis)
            {
                sonrakiAtis = Time.time + ikiMermiArasiSure;
                mermiAt();
            }


        }



    }

    void mermiAt()
    {
        if (PlayerPrefs.GetInt("SesDurumu") == 1)
        {
            audioSource.PlayOneShot(topSesi);
        }
        
        GameObject mermi = Instantiate(mermiPrefab[Random.Range(0,mermiPrefab.Length)],mermiYeri.position,mermiYeri.rotation) as GameObject;
    }
}
