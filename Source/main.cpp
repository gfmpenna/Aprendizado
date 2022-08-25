#include <iostream>
#include "Helpers/Jogo.h"
#include "Helpers/Banco.h"
#include "Helpers/Damage.h"

using namespace std;


int main() {

/*
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
*/

    Damage player;

    string nome;
    int a, b, c, d, e, f, g, h,x,y;


    cout << "Informe o que se pede:" << endl;
    cout << " " << endl;
    cout << "|| Informe o Nome: ";
    cin >> nome;
    cout << "|| Informe o HP: ";
    cin >> a;
    cout << "|| Informe o MP: ";
    cin >> b;
    cout << "|| Informe o ATAQUE: ";
    cin >> c;
    cout << "|| Informe o PRECISAO: ";
    cin >> d;
    cout << "|| Informe o Danos Critico: ";
    cin >> x;
    cout << "|| Informe o AmP: ";
    cin >> y;
    cout << "|| Informe o DEFESA: ";
    cin >> e;
    cout << "|| Informe o EVASAO: ";
    cin >> f;
    cout << "|| Informe o TAXA: ";
    cin >> g;
    cout << "|| Informe o MAX-TAXA: ";
    cin >> h;


    //player.charGame(nome, a, b, c, d,x,y, e, f, g, h);
    //player.charGame();


    int alow = player.totalAtk(c,d,x,y);
    int alow2 = player.totalDef(a,e,f);


    cout << "" <<  endl;
    cout << "Personagem: " << nome << endl;
    cout << "" <<  endl;
    cout << "Total Ataque: " << alow << endl;
    cout << "" << endl;
    cout << "Total Defesa: " << alow2 << endl;
    cout << "" <<  endl;




    system("pause");
    return 0;
}
