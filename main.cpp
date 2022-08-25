#include <iostream>
#include "Jogo.h"
#include "Banco.h"

using namespace std;


int main() {


    Jogo gow;

    gow.adquirir("Gow", 160.0f);
    gow.jogar(4);
    gow.exibir();

    cout << "_______" << endl;

    gow.jogar(4);
    gow.exibir();

    cout << "_______" << endl;

    Banco itau;

    itau.exibir("Guilherme", 195435, 199.00f);
    itau.depositar(100.00f);
    itau.mostrar();
    itau.sacar(298.00f);


    system("pause");
    return 0;
}
