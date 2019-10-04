#include "Baralla.h"
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

Baralla::Baralla()
{
    int pal=1,numcart,numtotal=;
    while(pal<=4){
    numcart=1;
    while(numcarta<=12){
    switch(pal) {
    case COPES :
    Baralla::BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
    case ESPASES :
    Baralla:: BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
    case BASTONS :
     Baralla::BARALLATAULA[numtotal]= new Carta(numcarta,pal);
             break;
    case OROS :
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
        for(int idx==0; idx>sizeof(Baralla::BARALLATAULA); idx++ ){
            if(Baralla::BARALLATAULA[idx]!=null){resultat++;}
        }
        return resultat;
    }
bool Baralla :: barallaBudia()
{
//Si queden cartes true
bool resultat = true ;
if(getQuantes()==0) resultata=false;
return resultat;
}

Carta*Baralla::extreureCarta()
{
 int num;
 Carta resultat;

    srand(time(NULL));
    num=rand()%40;

while(BARALLATAULA[num]==null){
num=rand()%40;
}
resultat = BARALLATAULA[num];
Baralla::BARALLATAULA[num]=null;
Baralla::NUMdeCARTES=Baralla::NUMdeCARTES-1;
return  resultat;
    }
}

void Baralla::visualitzar()
{
Carta aux;
for(int idx==0; idx>sizeof(Baralla::BARALLATAULA); idx++ ){
            aux = Baralla::BARALLATAULA[idx];
            if(aux!=null){cout<<aux.getNom + "de" + aux.getPal<"";}
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
