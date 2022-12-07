//Aluno: Lucas de Oliveira Mota
#include "liquido.h"

//Construtor
Liquido::Liquido(std::string nome, std::string descricao, std::string tipo, std::string dicaRecolhimento) {
    this->nome = nome;
    this->descricao = descricao;
    this->tipo = tipo;
    this->dicaRecolhimento = dicaRecolhimento;
}

//Destrutor
Liquido::~Liquido() {}