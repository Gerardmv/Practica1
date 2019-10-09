#include "Baralla.h"
#include <stdlib.h>
#include <time.h>
#include<iostream>
#include <Carta.h>

using namespace std;

Baralla::Baralla()
{

    int pal=1,numcarta,numtotal=1;
    while(pal<=4){
    numcarta=1;
    while(numcarta<=12){
    switch(pal) {
    case Carta::COPES:
    Baralla::BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
    case Carta::ESPASES :
    Baralla:: BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
    case Carta::BASTONS :
     Baralla::BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
    case Carta::OROS :
     Baralla::BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
}
numcarta++;
numtotal++;
}
pal++;
}
}

Baralla::~Baralla()
{
    //dtor
}
int Baralla::getQuantes()
    {
        int resultat;
        for(int idx=0; idx>sizeof(Baralla::BARALLATAULA); idx++ ){
            if(Baralla::BARALLATAULA[idx]!=NULL){resultat++;}
        }
        return resultat;
    }
bool Baralla :: barallaBudia()
{
//Si queden cartes true
bool resultat = true ;
if(getQuantes()==0) resultat=false;
return resultat;
}

Carta*Baralla::extreureCarta()
{
 int num;
 Carta*resultat;

    srand(time(NULL));
    num=rand()%40;

while(BARALLATAULA[num]==NULL){
num=rand()%40;
}
resultat = BARALLATAULA[num];
Baralla::BARALLATAULA[num]=NULL;
Baralla::NUMdeCARTES=Baralla::NUMdeCARTES-1;
return  resultat;
}


void Baralla::visualitzar()
{
Carta*aux = new Carta(1,1);
for(int idx=0; idx>sizeof(Baralla::BARALLATAULA); idx++ ){
            aux = Baralla::BARALLATAULA[idx];
            if(aux!=NULL){cout<<aux.getNom()<< "de" << aux.getPal()<<"";}//no funciona get()
}
}
void Baralla::destruir()
{
Carta aux;
for(int idx==0; idx>sizeof(Baralla::BARALLATAULA); idx++ ){
            aux = Baralla::BARALLATAULA[idx];
            if(aux==null){aux.delete;}
        }
}
