#include "Tauler.h"
#include <Carta.h>
#include <Baralla.h>
#include <iostream>

using namespace std;

Tauler::Tauler()
{
    munt = new Baralla();
    numCartesTaula = 0;
}

void Tauler::extreureCarta()
{
    Tauler::taulell[numCartesTaula]=munt->extreureCarta();
    Tauler::numCartesTaula++;
}

int Tauler::getQuantesTaulell()
{
    return numCartesTaula;
}

int Tauler::getQuantesMunt()
{
    return munt->getQuantes();
}
void Tauler::visualitza(bool mirarT)
{
    int siete=1;
    if(mirarT){
        for(int idx=0; idx<numCartesTaula;idx++){
            cout<<siete<<".- ";
            Tauler::taulell[idx]->visualitza(true);
            if(siete==7){
                cout<<"\n";
                siete=0;
            }
            siete++;
        }
    }
    else{
        Tauler::munt->visualitzar();
    }
}

Carta* Tauler::getCarta(int posicio)
{
    return Tauler::taulell[posicio];
}

bool Tauler::hiHaParelles()
{
    Carta*c1;
    Carta*c2;
    for(int idx=0;idx<20;idx++){
        c1=taulell[idx];
        if(taulell[idx+2]!=NULL){
            c2=taulell[idx+2];
            if(c1==c2)
                return true;
        }
    }
    return false;
}

bool Tauler::fiJocExit()
{
if(!hiHaParelles()){
    if(numCartesTaula==20){
        return true;
    }
    else if(numCartesTaula==2 && getQuantesMunt()==0){
        return true;
    }
    else{
        return true;
    }
}
return false;
}

void Tauler::aparellar(int pos)
{
    Carta* aux;
    while (pos<numCartesTaula-1) {
        taulell[pos] = taulell[pos+1];
        pos++;
    }
    numCartesTaula --;
}

