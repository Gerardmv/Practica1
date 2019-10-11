#include <iostream>
#include <Carta.h>
#include <Tauler.h>
#include <Baralla.h>

using namespace std;

int main()
{
    int accio=0;
    int posicio=0;
    Tauler* taulell = new Tauler;
    Baralla->visualitzar();
    //extreure tres cartes inicials
    taulell->extreureCarta();
    taulell->extreureCarta();
    taulell->extreureCarta();

    while(!taulell->fiJocExit()){
        taulell->visualitza();
        cout<<"1.Girar carta";
        if(taulell->hiHaParelles()){
            cout<<"2.Fer parella";
        }
        cout<<"Triar que vols fer";
        accio=;
        if(accio==1){taulell->extreureCarta();}
        if(accio==2){
            cout<<"indica posició"<<endl();
            posicio=;
            taulell->aparellar();
        }
    }
}
