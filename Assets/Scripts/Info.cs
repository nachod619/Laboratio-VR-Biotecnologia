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

    //info aparato de golgi

    public void agButton1()
    {
        Popup.Show("Vesícula de ingreso o transición \n  Procedente del Retículo endoplasmático");
    }

    public void agButton2()
    {
        Popup.Show("Vesícula de salida");
    }

    public void agButton3()
    {
        Popup.Show("Glucolípidos");
    }

    public void agButton4()
    {
        Popup.Show("Vesícula en formación");
    }

    public void agButton5()
    {
        Popup.Show("Lisosoma");
    }

    public void agButton6()
    {
        Popup.Show("Espacio intercisternal");
    }

    public void agButton7()
    {
        Popup.Show("Glucoproteínas");
    }


    //info cilios-flagelos

    public void mtButton1()
    {
        Popup.Show("Son apéndices locomotores que se prolongan desde la membrana de algunas células. Los cilios se encuentran solo en eucariotas; y, flagelos en procariotas y eucariotas; sin embargo las algas rojas, hongos, plantas con flor, nemátodos, no presentan ni cilios ni flagelos. En eucariotas, ambos presentan la misma estructura interna que está formada por el cuerpo basal y axonema. Los cillos realizan movimientos pendulares (circulares) y los flagelos ondulatorios, que les permiten remover, a modo de remos, el líquido que rodea la célula provocando el desplazamiento de ésta. Los flagelos se caracterizan por ser largos (100 - 200 micrómetros de longitud y 0,4 micrómetros de diámetro) mientras que los cilios son cortos (10-25 micrómetros y 0,25 micrómetros de diámetro). Los cilios presentes en mayor número (algunos miles), y flagelos muy pocos. Los procariotas pueden presentar un único flagelo, un grupo de éstos en un polo o múltiples flagelos que cubren toda la superficie; y, en eucariotas se encuentran en uno o dos.", longText);
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
