/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/

#include <stdlib.h>
#include <ostream>
#include <iostream>
#include <qlineedit.h>
#include <qcombobox.h>

using namespace std;

void kantenasMain::fileNew()
{

}


void kantenasMain::fileOpen()
{

}


void kantenasMain::fileSave()
{

}


void kantenasMain::fileSaveAs()
{

}


void kantenasMain::filePrint()
{

}


void kantenasMain::fileExit()
{

}


void kantenasMain::editUndo()
{

}


void kantenasMain::editRedo()
{

}


void kantenasMain::editCut()
{

}


void kantenasMain::editCopy()
{

}


void kantenasMain::editPaste()
{

}


void kantenasMain::editFind()
{

}


void kantenasMain::helpIndex()
{

}


void kantenasMain::helpContents()
{

}


void kantenasMain::helpAbout()
{

}

void kantenasMain::SlotCalcFrec()
    
{
    int c;
    double Frecuencia;
    double LongCALC;
    double Periodo;
    char T[100];
    char lambda[100];
    c = 300000;

    Frecuencia = atof(lineEditFrec->text());

/* Seleccion de unidades y su calculo */
    switch (comboBox1->currentItem())
    {
    case 0:
	Frecuencia = Frecuencia * 1000000;
	break;
	
    case 1:
	Frecuencia = Frecuencia * 1000000000;
	break;
    }

/* Calculo de la longitud de onda */
    LongCALC = (c * 1000) / Frecuencia;
    sprintf(lambda, "%f", LongCALC);
    comboBox2->setCurrentItem(1);
    cBoxLngO2->setCurrentItem(1);
    
    lineEditLong->setText(lambda);
    linEdLngO2->setText(lambda);

/* Calculo del periodo */
    Periodo = 1000000 / Frecuencia;    
    sprintf(T, "%f", Periodo);
    lineEditPeri->setText(T);
}


void kantenasMain::SlotCalcLong()
    
{
    int c;
    double LongBAND;
    double FreCALC;
    double Frecuencia;
    double Periodo;
    char T[100];
    char f[100];
    c = 300000;

    LongBAND = atof(lineEditLong->text());

    switch (comboBox2->currentItem())
	
/* Selecciona las unidades de medida y los valores en consecuencia */
    {
    case 0:
	LongBAND = LongBAND * 1000000;
	cBoxLngO2->setCurrentItem(0);
	break;

    case 1:
	LongBAND = LongBAND * 1000;
	cBoxLngO2->setCurrentItem(1);
	break;

    case 2:
	LongBAND = LongBAND * 10;
	cBoxLngO2->setCurrentItem(2);
	break;
    }
    
    linEdLngO2->setText(lineEditLong->text());
        
/* Calculo de la Frecuencia */
    FreCALC = c / LongBAND;
    sprintf(f, "%f", FreCALC);
    comboBox1->setCurrentItem(0);

    lineEditFrec->setText(f);

    Frecuencia = atof(lineEditFrec->text());
    
/* Calculo del periodo */
    Periodo = 1 / Frecuencia;
    sprintf(T, "%f", Periodo);
    lineEditPeri->setText(T);
}


void kantenasMain::SlotCalcPeri()
    
{
    int c;
    double Frecuencia;
    double Periodo;
    double LongCALC;
    char f[100];
    char lambda[100];
    c = 300000;
    
/* Calculo del Periodo */
    Periodo = atof(lineEditPeri->text());
    Frecuencia = 1 / Periodo;
    sprintf(f, "%f", Frecuencia);
    comboBox1->setCurrentItem(0);
    lineEditFrec->setText(f);
    
/* Calculo de la longitud de onda*/
    LongCALC = c / (Frecuencia * 1000);
    sprintf(lambda, "%f", LongCALC);
    comboBox2->setCurrentItem(1);
    cBoxLngO2->setCurrentItem(1);
    lineEditLong->setText(lambda);
    linEdLngO2->setText(lambda);
}


void kantenasMain::SlotCalcP1()
{
    double P1;
    double P2;
    double Gp;
    char PEnt[100];
    
    P2 = atof(linEdP2->text());
    Gp = atof(linEdGp->text());
    
    P1 = P2 * pow(10,(Gp/10));
     
    sprintf(PEnt, "%f", P1);
    linEdP1->setText(PEnt);
}


void kantenasMain::SlotCalcP2()
{
    double P1;
    double P2;
    double Gp;
    char PSal[100];
    
    P1 = atof(linEdP1->text());
    Gp = atof(linEdGp->text());
    
    P2 = P1/(pow(10,(Gp/10)));
     
    sprintf(PSal, "%f", P2);
    linEdP2->setText(PSal);
}


void kantenasMain::SlotCalcGp()
{
    double P1;
    double P2;
    double Gp;
    char GPot[100];
        
    P1 = atof(linEdP1->text());
    P2 = atof(linEdP2->text());
 
    Gp =10 * log10(P1/P2);
     
    sprintf(GPot, "%f", Gp);
    linEdGp->setText(GPot);
}


void kantenasMain::SlotCalcU1()
{
    double U1;
    double U2;
    double Gu;
    char UEnt[100];
    
    U2 = atof(linEdU2->text());
    Gu = atof(linEdGu->text());
    
    U1 = U2 * pow(10,(Gu/20));
     
    sprintf(UEnt, "%f", U1);
    linEdU1->setText(UEnt);
}


void kantenasMain::SlotCalcU2()
{
    double U1;
    double U2;
    double Gu;
    char USal[100];
    
    U1 = atof(linEdU1->text());
    Gu = atof(linEdGu->text());
    
    U2 = U1/(pow(10,(Gu/20)));
     
    sprintf(USal, "%f", U2);
    linEdU2->setText(USal);
}


void kantenasMain::SlotCalcGu()
{
    double U1;
    double U2;
    double Gu;
    char GTen[100];
        
    U1 = atof(linEdU1->text());
    U2 = atof(linEdU2->text());
 
    Gu =20 * log10(U1/U2);
     
    sprintf(GTen, "%f", Gu);
    linEdGu->setText(GTen);
}



void kantenasMain::SlotCalcI1()
{
    double I1;
    double I2;
    double Gi;
    char IEnt[100];
    
    I2 = atof(linEdI2->text());
    Gi = atof(linEdGi->text());
    
    I1 = I2 * pow(10,(Gi/20));
     
    sprintf(IEnt, "%f", I1);
    linEdI1->setText(IEnt);
}


void kantenasMain::SlotCalcI2()
{
    double I1;
    double I2;
    double Gi;
    char ISal[100];
    
    I1 = atof(linEdI1->text());
    Gi = atof(linEdGi->text());
    
    I2 = I1/(pow(10,(Gi/20)));
     
    sprintf(ISal, "%f", I2);
    linEdI2->setText(ISal);
}


void kantenasMain::SlotCalcGi()
{
    double I1;
    double I2;
    double Gi;
    char GInt[100];
        
    I1 = atof(linEdI1->text());
    I2 = atof(linEdI2->text());
 
    Gi =20 * log10(I1/I2);
     
    sprintf(GInt, "%f", Gi);
    linEdGi->setText(GInt);
}


void kantenasMain::SlotCalcLongDip()
{
    double LongBAND;
    double CalcDipDiv1;
    double CalcDipDiv2;
    char LDip[100];
    char LDipDiv2[100];
    
    LongBAND = atof(linEdLngO2->text());
    CalcDipDiv2 = LongBAND/4;
    CalcDipDiv1 = LongBAND/2;
    
    switch (cBoxLngO2->currentItem())
	
/* Selecciona las unidades de medida y los valores en consecuencia */
    {
    case 0:
	sprintf(LDip, "<p align=\"center\">%f Km</p>", CalcDipDiv1);
	sprintf(LDipDiv2, "<p align=\"center\">%f Km</p>", CalcDipDiv2);
	break;

    case 1:
	sprintf(LDip, "<p align=\"center\">%f m</p>", CalcDipDiv1);
	sprintf(LDipDiv2, "<p align=\"center\">%f m</p>", CalcDipDiv2);
	break;

    case 2:
	sprintf(LDip, "<p align=\"center\">%f cm</p>", CalcDipDiv1);
	sprintf(LDipDiv2, "<p align=\"center\">%f cm</p>", CalcDipDiv2);
	break;
    }
    
    txtLblongDip1->setText(LDipDiv2);
    txtLblongDip2->setText(LDipDiv2);
    txtLblongDipTO->setText(LDip);
}


void kantenasMain::SlotCalcAt()
{
    double Sa;
    double Ga;
    double St;
    double At;
    char Atenuacion[100];
    
    Sa = atof(lEdSa->text());
    Ga = atof(lEdGa->text());
    St = atof(lEdSt->text());
    
    At = Ga + Sa - St;
    
    sprintf(Atenuacion, "%f", At);
    
    lEdAt->setText(Atenuacion);
}


void kantenasMain::SlotCalcSa()
{
    double Sa;
    double Ga;
    double St;
    double At;
    char SAntena[100];
    
    At = atof(lEdAt->text());
    Ga = atof(lEdGa->text());
    St = atof(lEdSt->text());
    
    Sa = St + At - Ga;
    
    sprintf(SAntena, "%f", Sa);
    
    lEdSa->setText(SAntena);
}


void kantenasMain::SlotCalcGa()
{
    double Sa;
    double Ga;
    double St;
    double At;
    char GAmpli[100];
    
    At = atof(lEdAt->text());
    Sa = atof(lEdSa->text());
    St = atof(lEdSt->text());
    
    Ga = St + At - Sa;
    
    sprintf(GAmpli, "%f", Ga);
    
    lEdGa->setText(GAmpli);
}


void kantenasMain::SlotCalcSt()
{
    double Sa;
    double Ga;
    double St;
    double At;
    char SToma[100];
    
    At = atof(lEdAt->text());
    Ga = atof(lEdGa->text());
    Sa = atof(lEdSa->text());
    
    St = Ga + Sa - At;
    
    sprintf(SToma, "%f", St);
    
    lEdSt->setText(SToma);
}


void kantenasMain::SlotCalcAt_2()
{
    double Sa;
    double Se;
    double At;
    char Atenuacion[100];
    
    Sa = atof(lEdSa_2->text());
    Se = atof(lEdSe_2->text());
    
    At = Sa - Se;
    
    sprintf(Atenuacion, "%f", At);
    
    lEdAt_2->setText(Atenuacion);
}


void kantenasMain::SlotCalcSa_2()
{
    double Sa;
    double Se;
    double At;
    char SAntena[100];
    
    At = atof(lEdAt_2->text());
    Se = atof(lEdSe_2->text());
    
    Sa = Se - At;
    
    sprintf(SAntena, "%f", Sa);
    
    lEdSa_2->setText(SAntena);
}


void kantenasMain::SlotCalcSe_2()
{
    double Sa;
    double Se;
    double At;
    char SEntrada[100];
    
    At = atof(lEdAt_2->text());
    Sa = atof(lEdSa_2->text());
    
    Se = Sa + At;
    
    sprintf(SEntrada, "%f", Se);
    
    lEdSe_2->setText(SEntrada);
}