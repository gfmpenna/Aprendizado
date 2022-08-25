//
// Created by 55229 on 25/08/2022.
//

#include "Helpers/Damage.h"

/*
    string name;
    int hp;
    int mp;
    int ataque;
    int precisao;
    int defesa;
    int evasao;
    int taxa;
    int maxtaxa;
*/
void
Damage::charGame(const string &nome, int vida, int mana, int atk, int prec, int dc, int amp, int def, int evas, int tx,
                 int mtx) {

    name = nome;
    hp = vida;
    mp = mana;
    ataque = atk;
    precisao = prec;
    defesa = def;
    evasao = evas;
    taxa = tx;
    maxtaxa = mtx;

}

int Damage::totalAtk(int atk, int prec, int dc, int amp) {

    ataque = atk;
    precisao = prec;
    danoCritico = dc;
    amplificacao = amp;

    int resultAtak = ((ataque + precisao) * (danoCritico + amplificacao)) / 1000;

    return resultAtak;
}


int Damage::calcCrit(int tx, int mtx) {

    taxa = tx;
    maxtaxa = mtx;


    if (taxa > maxtaxa) {

        std::cout << "Aqui e a Max Taxa: " << maxtaxa << endl;

        return maxtaxa;

    } else {

        std::cout << "Aqui e a Taxa: " << taxa << endl;
        return taxa;

    }


}

int Damage::totalDef(int vida, int def, int eva) {

    hp = vida;
    defesa = def;
    evasao = eva;

    int resultDef = (def + eva) * vida / 10000;

    return resultDef;

}

int Damage::totalFor(int atk, int prec, int tx, int mtx, int vida, int def, int evas) {

    ataque = atk;
    precisao = prec;
    taxa = tx;
    maxtaxa = mtx;
    hp = vida;
    defesa = def;
    evasao = evas;

    return true;

}

int Damage::calculacriticohit(int tx, int mtx) {

    taxa = Damage::calcCrit(tx, mtx);

    int Temp = 0;
    int critou = 0;
    int naocritou = 0;

    srand(time(NULL));

    for (int j = 0; j <= 8; j++) {

        for (int i = 0; i <= 10; i++) {

            Temp = rand() % 100 + 1;

            if (Temp <= taxa) {

                critou++;

            } else {

                naocritou++;
            }
        }
    }

    cout << "" << endl;
    cout << "Taxa Atual na Hora dos Hits: " << taxa << endl;
    cout << "" << endl;
    cout << "Bateu " << critou + naocritou << " Hits e Critou: " << critou << endl;
    cout << "Bateu " << critou + naocritou << " Hits e Nao Critou " << naocritou << endl;
    cout << "" << endl;

    return true;
}


void Damage::charShow() {


    std::cout << "Nome Character: " << name << endl;
    std::cout << "HP: " << hp << endl;
    std::cout << "MP: " << mp << endl;
    std::cout << "ATAQUE: " << ataque << endl;
    std::cout << "PRECISAO: " << precisao << endl;
    std::cout << "TAXA: " << taxa << endl;
    std::cout << "MAX-TAXA: " << maxtaxa << endl;
    std::cout << "DEFESA: " << defesa << endl;
    std::cout << "EVASAO: " << evasao << endl;


}





