#ifndef BARALLA_H
#define BARALLA_H
#include <Carta.h>
class Baralla
{
    public:
        Baralla();
        virtual ~Baralla();
        int getQuantes();
        bool barallaBudia();
        Carta*extreureCarta();
        void visualitzar();
        void destruir();

    protected:

    private:
        static Carta*BARALLATAULA[40];
        static int NUMdeCARTES;

};

#endif // BARALLA_H

