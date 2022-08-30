//
// Created by 55229 on 26/08/2022.
//

#include "Helpers/Monster.h"

/*
string nomeMob;
string mapa;
int levelMob;
int hpMob;
int ataqueMob;
int defesaMob;
*/


void Monster::gameMob(const string &name, const string &map, int nvM, int hpM, int atakM, int defM) {

    string nome, mapa;
    int lev, life, atqM, defeM;


    cout << "Nome do Mob: " << name << endl;
    cin >> nome;
    cout << "Mapa do Mob: " << map << endl;
    cin >> mapa;
    cout << "Level do Mob: " << nvM << endl;
    cin >> lev;
    cout << "Vida do Mob: " << hpM << endl;
    cin >> life;
    cout << "Ataque do Mob: " << atakM << endl;
    cin >> atqM;
    cout << "Defesa do Mob: " << defM << endl;
    cin >> defeM;

}