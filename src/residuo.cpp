// Aluno: Lucas Mota, Igor Acácio
#include "residuo.h"

// Construtor
Residuo::Residuo(int tipo, std::string nome, std::string descricao, std::string dicaRecolhimento)
{
    setTipo(tipo);
    setNome(nome);
    setDescricao(descricao);
    setDicaRecolhimento(dicaRecolhimento);
}

// Destrutor
Residuo::~Residuo() {}

// Getters e Setters
int Residuo::getTipo()
{
    return tipo;
}

void Residuo::setTipo(int tipo)
{
    this->tipo = tipo;
}

std::string Residuo::getNome()
{
    return nome;
}

void Residuo::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Residuo::getDescricao()
{
    return descricao;
}

void Residuo::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}

std::string Residuo::getDicaRecolhimento()
{
    return dicaRecolhimento;
}

void Residuo::setDicaRecolhimento(std::string dicaRecolhimento)
{
    this->dicaRecolhimento = dicaRecolhimento;
}