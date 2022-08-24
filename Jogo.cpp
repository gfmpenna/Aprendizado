//
// Created by 55229 on 24/08/2022.
//
#include <iostream>
#include "Jogo.h"


void Jogo::adquirir(const string &titulo, float valor) {

    nome = titulo;
    preco = valor;
    horas = 0;
    custo = valor;

}

void Jogo::atualizar(float valor) {

    preco = valor;
    calcular();

}

void Jogo::jogar(int tempo) {

    horas = horas + tempo;
    calcular();

}


void Jogo::exibir() {

    std::cout << nome << " O Jogo" << std::endl;
    std::cout << preco << " Reais" << std::endl;
    std::cout << horas << " Horas jogadas" << std::endl;
    std::cout << custo << " Reais/H" << std::endl;
}