//
// Created by 55229 on 24/08/2022.
//
#ifndef UNTITLED1_BANCO_H
#define UNTITLED1_BANCO_H

#include <string>

using std::string;

class Banco {

private:

    string nome;
    int numConta;
    float saldo = 0;

public:

    void exibir(const string &titular, int conta, float valor);

    float depositar(float valor);

    float sacar(float valor);

    void mostrar();

};


#endif //UNTITLED1_BANCO_H