//Aluno: Lucas Mota, Igor Acácio
#include "liquido.h"

//Construtor
Liquido::Liquido(int tipo, std::string nome, std::string descricao, std::string dicaRecolhimento, double volume) : Residuo(tipo, nome, descricao, dicaRecolhimento) {
    setVolume(volume);
}

//Destrutor
Liquido::~Liquido() {}

//Getters e Setters
double Liquido::getVolume() {
    return volume;
}

void Liquido::setVolume(double volume) {
    this->volume = volume;
}