#include <iostream>
#include <Carta.h>

using namespace std;

int main()
{
    Carta *carta = new Carta();
    cout << (*carta).donaNom(3) << endl;
    cout << (*carta).donaPal(3) << endl;
    return 0;
}
