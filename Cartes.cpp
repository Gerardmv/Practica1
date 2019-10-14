#include "Carta.h"
#include <iostream>

using namespace std;

Carta::Carta(int num, int numpal)
: NUMCARTA(num), PAL(Carta::donaPal(numpal)), NOMCARTA(Carta::donaNom(num))
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
    string resultat[12] = {"AS", "DOS", "TRES", "QUATRE", "CINC", "SIS", "SET", ""/*Crec que serà millor NULL*/, ""/*Crec que serà millor NULL*/, "SOTA", "CAVALL", "REI"};
    return resultat[numero-1];
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

void Carta::visualitza(bool nom)
{
    if (nom) {
        cout << Carta::getNom()<<" de "<<Carta::donaPal(Carta::palAInt(PAL))<< " // ";
    } else {
        cout <<Carta::getNum()<<" de "<<Carta::donaPal(Carta::palAInt(PAL))<< " // ";
    }
}

int Carta::palAInt(string pal)
{
     if (pal == "BASTONS"){
         return Carta::BASTONS;
     } else if (pal == "ESPASES") {
         return Carta::ESPASES;
     } else if (pal == "COPES") {
         return Carta::COPES;
     } else if (pal == "OROS") {
         return Carta::OROS;
     } else {
         return -1;
     }
}
bool Carta::operator==(Carta *c1)
{
    return this->palAInt(PAL) == c1->palAInt(c1->getPal()) || this->NUMCARTA == c1->getNum();
}
bool Carta::operator!=(Carta *c1)
{
    return !Carta::operator==(c1);
}

