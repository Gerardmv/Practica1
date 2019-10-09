#ifndef TAULER_H
#define TAULER_H
#include <Carta.h>
#include <Baralla.h>


class Tauler
{
    public:
        Tauler();
        virtual ~Tauler();
        void visualitza(bool);
        void extreureCarta();
        void aparellar(int pos);
        bool fiJocExit();
        bool hiHaParelles();
        Carta* getCarta(int posicio);
        int getQuantesTaulell();
        int getQuantesMunt();

    protected:

    private:
    Carta*taulell[20];
    int numCartesTaula;
    Baralla*munt;

};

#endif // TAULER_H
