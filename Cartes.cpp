#include "Carta.h"
#include <iostream>

using namespace std;

Carta::Carta(int num, int numpal)
: NUMCARTA(num), PAL(Carta::donaPal(num)), NOMCARTA(Carta::donaNom(numpal))
{

}

int Carta::getNum() {
    return Carta::NUMCARTA;
}

string Carta::getNom() {
    return Carta::NOMCARTA;
}

string Carta::getPal()  {
    return Carta::PAL;
}

string Carta::donaNom(int numero)
    {
        string resultat[12] = {"AS", "DOS", "TRES", "QUATRE", "CINC", "SIS", "SET", "", "", "SOTA", "CAVALL", "REI"};
        return resultat[numero - 1];
    }

string Carta::donaPal(int numero)
    {
        switch (numero) {
            case Carta::BASTONS:
                return "BASTONS";
            case Carta::COPES:
                return "COPES";
            case Carta::ESPASES:
                return "ESPASES";
            case Carta::OROS:
                return "OROS";
            default:
                return "ERROR";
        }
    }
