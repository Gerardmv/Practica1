#include <iostream>
#include <Carta.h>
#include <Baralla.h>
#include <Tauler.h>
using namespace std;

int main()
{

    Tauler* t = new Tauler();
    t->visualitza(false);
    int accio;
    int posicio;
    for (int i = 0; i<3; i++)
        t->extreureCarta();
    cout<<""<<endl;
    cout<<"MOSTRANT CARTES INICIALS"<<endl;
    cout<<"------------------------"<<endl;
    while (t->fiJocExit()) {
        t->visualitza(true);
        while (t->hiHaParelles()) {
            cout<<"Girem una carta"<<endl;
            t->extreureCarta();
        }
        cout<<""<<endl;
        cout<<"Tria que vols fer:"<<endl;
        cout<<"1.- Girar carta"<<endl;
        cout<<"2.- Triar parella de cartes"<<endl;
        cin >> accio;
        if (accio == 1) {
            if (t->getQuantesTaulell()<=19) {
                t->extreureCarta();
            } else {
                cout<<""<<endl;
                cout<<"ERROR: JA NO POTS TREURE MES CARTES!"<<endl;
                cout<<""<<endl;
            }
        }
        else if (accio == 2) {
            cout<<"indica posicio. S'aparellarà amb la carta que dista una posició a la dreta de la seleccionada"<<endl;
            cin >> posicio;
            while (posicio>=t->getQuantesTaulell()-1||posicio<=0) {
                cout<<""<<endl;
                cout<<"ERROR: Selecciona una carta vàlida"<<endl;
                cout<<""<<endl;
            }
            if (*p==n) {
                t->aparellar(posicio-1);
            } else {
                cout<<""<<endl;
                cout<<"ERROR: Aquestes cartes no es poden aparellar"<<endl;
                cout<<""<<endl;
            }
        }
    }

    cout<<"JOC FINALITZAT. CARTES RESTANTS:"<< t->getQuantesMunt()+t->getQuantesTaulell()<<endl;

    delete t;
}
