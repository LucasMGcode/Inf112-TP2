//Aluno: Lucas de Oliveira Mota
#include "residuo.h"

std::string Residuo::getNome() {
    return nome;
}

std::string Residuo::getDescricao() {
    return descricao;
}

std::string Residuo::getTipo() {
    return tipo;
}

std::string Residuo::getDicaRecolhimento() {
    return dicaRecolhimento;
}

//Método(s)
void Residuo::imprimirDados(Residuo &residuo) {
    std::cout << "Nome: " << residuo.getNome() << std::endl;
    std::cout << "Descrição: " << residuo.getDescricao() << std::endl;
    std::cout << "Tipo: " << residuo.getTipo() << std::endl;
    std::cout << "Dica de Recolhimento: " << residuo.getDicaRecolhimento() << std::endl;
}