//
// Created by 55229 on 25/08/2022.
//
#include "Helpers/Damage.h"
#include <ctime>

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

    int resultAtak = ((atk + prec) * (dc + amp)) / 1000;

    return resultAtak;
}


int Damage::calcCrit(int tx, int mtx) {



    if (tx > mtx) {

        std::cout << "Aqui e a Max Taxa: " << mtx << endl;
        return mtx;

    } else {

        std::cout << "Aqui e a Taxa: " << tx << endl;
        return tx;
    }

    tx = Damage::calcCrit(tx, mtx);

    int Temp = 0;
    int critou = 0;

    srand(time(NULL));

    for (int j = 0; j <= 8; j++) {

        for (int i = 0; i <= 10; i++) {

            Temp = rand() % 100 + 1;

            if (Temp <= tx) {

                critou++;

            }
        }
    }

    int calc0 = (((ataque * precisao) / 1000) + (((danoCritico + amplificacao) * 10) / (taxa / 2)) +
                 ((hp + defesa + evasao) * 2)) * 80 / 1000;


    return true;

}

int Damage::totalDef(int vida, int def, int eva) {


    int resultDef = (def + eva) * vida / 10000;

    return resultDef;

}

int Damage::totalFor(int atk, int prec, int tx, int mtx, int vida, int def, int evas, int dc, int amp) {



    int poderTotal = (((atk * prec) / 1000) + (((dc + amp) * 10) / (tx / 2)) +
                 ((vida + def + evas) * 2)) * 80 / 1000;

    return poderTotal;

}

int Damage::calculacriticohit(int tx, int mtx) {

    tx = Damage::calcCrit(tx, mtx);

    int Temp = 0;
    int critou = 0;
    int naocritou = 0;

    srand(time(NULL));

    for (int j = 0; j <= 8; j++) {

        for (int i = 0; i <= 10; i++) {

            Temp = rand() % 100 + 1;

            if (Temp <= tx) {

                critou++;

            } else {

                naocritou++;
            }
        }
    }

    cout << "" << endl;
    cout << "Taxa Atual na Hora dos Hits: " << tx<< endl;
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