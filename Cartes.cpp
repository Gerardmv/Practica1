#ifndef CARTA_H
#define CARTA_H
#include <string>
using namespace std;


class Carta
{
    public:
        Carta();
        virtual ~Carta();
        string static donaNom(int numero);
        string static donaPal(int pal);
    protected:

    private:
        const static int COPES = 1;
        const static int ESPASES = 2;
        const static int BASTONS = 3;
        const static int OROS = 4;

        const int NUMCARTA;
        const int PAL;
        const string NOMCARTA;
};

#endif // CARTA_H
