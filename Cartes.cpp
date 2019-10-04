#include "Carta.h"
#include <string>
using namespace std;

Carta::Carta(int numcarta, int numpal)
{
    Carta::NUMCARTA = numcarta;
    Carta::NOMCARTA = Carta::donaNom(numcarta);
    Carta::PAL =
}

Carta::~Carta()
{

}

string Carta::donaNom(int numero)
    {
        string resultat[12] = {"AS", "DOS", "TRES", "QUATRE", "CINC", "SIS", "SET", "", "", "SOTA", "CAVALL", "REI"};
        return resultat[numero - 1];
    }

string Carta::donaPal(int numero)
    {

        string resultat[4] = {"COPES","ESPASES","BASTONS","OROS"};
        return resultat[numero-1];
    }
