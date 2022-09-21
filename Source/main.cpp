#include <iostream>
#include "Helpers/Jogo.h"
#include "Helpers/Banco.h"
#include "Helpers/Damage.h"
#include "Helpers/Monster.h"

using namespace std;

void listachar();



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

    //Damage player;
    Monster mob;

    mob.gameMob(const string& name, const string& map,int nvM,int hpM,int atakM, int defM);


    listachar();








    system("pause");
    return 0;
}



void listachar(){

    Damage player;

    string name;
    int a, b, c, d, e, f, g, h, x, y;


    cout << "Informe o que se pede:" << endl;

    cout << " " << endl;
    cout << "|| Informe o Nome: ";
    cin >> name;
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
    cout << "___________________________________________" << endl;


    player.charGame(name, a, b, c, d, x, y, e, f, g, h);
    player.charShow();

    int alow = player.totalAtk(c, d, x, y);
    int alow2 = player.totalDef(a, e, f);
    int alow3 = player.atakCriticoTotal(c, d, g, h, a, e, f, x, y);
    int alow4 = player.atakNormalTotal(c, d, g, h, a, e, f, x, y);

    // Calculo de dano e Hits Critado e não Critado e o Total Somado
    cout << "Ataque Total Critado: " << alow3 << endl;
    cout << "Ataque Normal Total: " << alow4 << endl;
    cout << "Dano Total Causado: " << alow3 + alow4 << endl;

    cout << "___________________________________________" << endl;
    cout << "Total Ataque: " << alow << endl;
    cout << "Total Defesa: " << alow2 << endl;

    cout << "___________________________________________" << endl;
    player.calculaCriticoHit(g, h);

    cout << "___________________________________________" << endl;

}
