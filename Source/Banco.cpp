//
// Created by 55229 on 24/08/2022.
//
#include <iostream>
#include "Helpers/Banco.h"


void Banco::exibir(const string &titular, int conta, float valor) {

    nome = titular;
    numConta = conta;
    saldo = valor;
}

float Banco::depositar(float valor) {

    saldo += valor;

    return saldo;
}

float Banco::sacar(float valor) {


    if (saldo < valor) {

        std::cout << "Saldo insuficiente" << std::endl;

    } else {

        float result = (saldo - valor);
        std::cout << "Saldo Atual: " << result << std::endl;

    }

    return saldo;

}

void Banco::mostrar() {

    std::cout << "Dados Conta: " << nome << std::endl;
    std::cout << "Numero Conta/C: " << numConta << std::endl;
    std::cout << "Saldo: " << saldo << std::endl;

}

