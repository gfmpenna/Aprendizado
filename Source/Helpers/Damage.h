//
// Created by 55229 on 25/08/2022.
//
#ifndef UNTITLED1_DAMAGE_H
#define UNTITLED1_DAMAGE_H

#include <iostream>
#include <string>

using namespace std;


class Damage {

private:

    string name;
    int hp;
    int mp;
    int ataque;
    int precisao;
    int danoCritico;
    int amplificacao;
    int defesa;
    int evasao;
    int taxa;
    int maxtaxa = 50;

    float danoMob;

public:


    void charGame(const string &nome, int vida, int mana, int atk, int prec, int dc, int amp, int def, int evas, int tx, int mtx);

    int totalAtk(int atk, int prec, int dc, int amp);

    int calcCrit(int tx, int mtx);

    int totalDef(int vida, int def, int eva);

    int totalFor(int atk, int prec, int tx, int mtx, int vida, int def, int evas);

    int calculacriticohit(int tx, int mtx);

    void charShow();

};


#endif //UNTITLED1_DAMAGE_H
