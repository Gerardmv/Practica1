#ifndef CARTA_H
#define CARTA_H
#include <iostream>

using namespace std;


class Carta
{
    public:
        Carta(int, int);
        int getNum();
        string getPal();
        string getNom();
        const static int COPES = 1;
        const static int ESPASES = 2;
        const static int BASTONS = 3;
        const static int OROS = 4;
        void visualitza (bool);
    protected:

    private:

        string static donaNom(int numero);
        string static donaPal(int pal);

        const int NUMCARTA;
        const string PAL;
        const string NOMCARTA;
};

#endif // CARTA_H
