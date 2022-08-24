//
// Created by 55229 on 24/08/2022.
//

#ifndef UNTITLED1_JOGO_H
#define UNTITLED1_JOGO_H

#include <string>

using std::string;


class Jogo {

private:

    string nome;
    float preco;
    int horas;
    float custo;

    void calcular() {

        if (horas > 0)
            custo = preco / horas;
    }

public:

    void adquirir(const string &titulo, float valor);

    void atualizar(float valor);

    void jogar(int tempo);

    void exibir();

};


#endif //UNTITLED1_JOGO_H
