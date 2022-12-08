//Aluno: Lucas de Oliveira Mota
#include "solido.h"

//Construtor
Solido::Solido(int tipo, std::string nome, std::string descricao, std::string dicaRecolhimento, double peso) : Residuo(tipo, nome, descricao, dicaRecolhimento) {
    setPeso(peso);
}

//Destrutor
Solido::~Solido() {}

//Getters e Setters
double Solido::getPeso() {
    return peso;
}

void Solido::setPeso(double peso) {
    this->peso = peso;
}