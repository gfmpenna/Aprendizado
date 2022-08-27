//
// Created by 55229 on 26/08/2022.
//

#ifndef UNTITLED1_MONSTER_H
#define UNTITLED1_MONSTER_H

#include <string>
#include <iostream>

using namespace std;


class Monster {

private:

    string nomeMob;
    string mapa;
    int levelMob;
    int hpMob;
    int ataqueMob;
    int defesaMob;

public:

    void gameMob(const string& name, const string& map,int nvM,int hpM,int atakM, int defM);






};


#endif //UNTITLED1_MONSTER_H
