#include "Baralla.h"
#include <stdlib.h>
#include <time.h>
#include<iostream>
#include <Carta.h>

using namespace std;

Baralla::Baralla()
{
    NUMdeCARTES = 0;
    int pals[4] = {Carta::BASTONS,Carta::COPES, Carta::ESPASES, Carta::OROS};
    int numeros[10]={1,2,3,4,5,6,7,10,11,12};
    for (int palAct = 0; palAct<4;palAct++){
        for (int numeroAct = 0; numeroAct<10;numeroAct++){
            Baralla::BARALLATAULA[NUMdeCARTES] = new Carta(numeros[numeroAct],pals[palAct]);
            NUMdeCARTES++;
        }
    }
}

int Baralla::getQuantes()
{
    return Baralla::NUMdeCARTES;
}

bool Baralla :: barallaBudia()
{
//Si queden cartes true
    bool resultat = true ;
    if(getQuantes()==0)
        resultat=false;
    return resultat;
}

Carta*Baralla::extreureCarta()
{
    int num;
    Carta* resultat;

    srand(time(NULL));
    num=rand()%40;

    while(BARALLATAULA[num]==NULL){num=rand()%40;}

    resultat = BARALLATAULA[num];
    Baralla::BARALLATAULA[num]=NULL;
    Baralla::NUMdeCARTES=Baralla::NUMdeCARTES-1;
    return  resultat;
}


void Baralla::visualitzar()
{
    Carta*aux = new Carta(1,1);
    for(int idx=0; idx>40; idx++ ){
        aux = Baralla::BARALLATAULA[idx];
        if(aux!=NULL){aux->visualitza(true);}
}
}
void Baralla::destruir()
{
    Carta*aux;
    for(int idx=0; idx>40; idx++ ){
        aux = Baralla::BARALLATAULA[idx];
        if(aux==NULL){delete aux;}
    }
}
