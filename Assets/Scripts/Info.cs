using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyUI.Popup;

public class Info : MonoBehaviour
{
    [TextArea (5, 5)] public string longText;
    //info nucleo 
    public void Button1()
    {
        Popup.Show("Poros nucleares");
    }

    public void Button2()
    {
        Popup.Show("Nucléolo (ADN-ARN-proteínas)");
    }

    public void Button3()
    {
        Popup.Show("Lámina fibrosa");
    }

    public void Button4()
    {
        Popup.Show("Membrana nuclear interna");
    }

    public void Button5()
    {
        Popup.Show("DNA");
    }

    public void Button6()
    {
        Popup.Show("Ribosoma");
    }

    public void Button7()
    {
        Popup.Show("Fibrilla citosólica");
    }

    public void Button8()
    {
        Popup.Show("Subunidad anular");
    }

    public void Button9()
    {
        Popup.Show("Subunidad luminal");
    }

    public void Button10()
    {
        Popup.Show("Subunidad en columna");
    }

    public void Button11()
    {
        Popup.Show("Subunidad del anillo");
    }

    public void Button12()
    {
        Popup.Show("Fibrilla nuclear");
    }

    public void Button13()
    {
        Popup.Show("Lámina nuclear");
    }

    //info ribosoma

    public void rButton1()
    {
        Popup.Show("Proteína sintetizándose");
    }

    public void rButton2()
    {
        Popup.Show("Aminoácidos");
    }

    public void rButton3()
    {
        Popup.Show("Subunidad grande");
    }

    public void rButton4()
    {
        Popup.Show("Sitio A");
    }

    public void rButton5()
    {
        Popup.Show("Sitio P");
    }

    public void rButton6()
    {
        Popup.Show("Subunidad pequeña");
    }

    public void rButton7()
    {
        Popup.Show("ARNm");
    }

    public void rButton8()
    {
        Popup.Show("ARNt");
    }

    //info reticulo endoplasmático

    public void reButton1()
    {
        Popup.Show("Retículo endoplasmático liso");
    }

    public void reButton2()
    {
        Popup.Show("Retículo endoplasmático rugoso");
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }
}
