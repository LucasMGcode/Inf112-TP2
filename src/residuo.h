//Aluno: Lucas de Oliveira Mota
#ifndef CADASTRORESIDUO_H
#define CADASTRORESIDUO_H

#include <iostream>

class Residuo {
    protected:
        std::string nome;
        std::string descricao;
        std::string tipo;
        std::string dicaRecolhimento;
    public:
        //Getters
        std::string getNome();
        std::string getDescricao();
        std::string getTipo();
        std::string getDicaRecolhimento();
};

#endif //CADASTRORESIDUO_H