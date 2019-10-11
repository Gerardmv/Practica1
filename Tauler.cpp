#include "Tauler.h"
#include <Carta.h>
#include <Baralla.h>

Tauler::Tauler()
{
 munt= new Baralla();
 numCartesTaula=0;
}

Tauler::~Tauler()
{
}

void Tauler::extreureCarta()
{
taulell[numCartesTaula]=munt->extreureCarta();
Tauler::numCartesTaula++;
}

int getQuantesTaulell()
{
return numCartesTaula;
}

int getQuantesMunt()
{
return munt->getQuants();
}
void visualitza(bool mirarT)
{
int siete=1;
if(mirarT){
    for(int idx=0; idx<sizeof(taulell);idx++){
    taulell[idx]->visualitzar();
    if(siete==7){
        cout<<"\n";
        siete=0;
        }
    siete++;
    }
}
else{
    munt->visulitzar();
}
}

Carta* getCarta(int posicio)
{
return tauler[posicio];
}

bool hiHaParelles()
{
Carta*c1;
Carta*c2;
for(int idx=0;idx<sizeof(taulell);idx++){
c1=taulell[idx];
if(taulell[idx+2]!=NULL){
c2=taulell[idx+2];
if(c1==c2) return true;
}
}
return false;
}

bool fiJocExit()
{
if(!hiHaParelles()){
    if(getQuantesTaulell()==20){
            //perds
            return true;
        }
    else{
        if(getQuantesTaulell()==2 && getQuantesMunt()==0){
            //GG
            return true;
        }
        else{
            //Perds
            return true;
        }
        }
}
return false;
}
void aparellar(int pos)
{
if(getCarta(pos+2)!=NULL&&getCarta(pos!=NULL)){
if(getCarta(pos)==getCarta(pos+2)){
    //FEr elimincaió de la carta al taulell
}
}
}

}
