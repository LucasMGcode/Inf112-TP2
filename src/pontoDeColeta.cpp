// Aluno: Lucas Mota, Igor Acácio
#include "pontoDeColeta.h"

PontoDeColeta::PontoDeColeta()
{
    this->cep = "";
    this->nome = "";
    this->endereco = "";
    this->bairro = "";
    this->cidade = "";
    this->estado = "";
}

PontoDeColeta::PontoDeColeta(std::string cep, std::string nome, std::string endereco, std::string bairro, std::string cidade, std::string estado)
{
    this->cep = cep;
    this->nome = nome;
    this->endereco = endereco;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
}

PontoDeColeta::~PontoDeColeta()
{
}

std::string PontoDeColeta::getCep()
{
    return this->cep;
}

void PontoDeColeta::setCep(std::string cep)
{
    this->cep = cep;
}

std::string PontoDeColeta::getNome()
{
    return this->nome;
}

void PontoDeColeta::setNome(std::string nome)
{
    this->nome = nome;
}

std::string PontoDeColeta::getEndereco()
{
    return this->endereco;
}

void PontoDeColeta::setEndereco(std::string endereco)
{
    this->endereco = endereco;
}

std::string PontoDeColeta::getBairro()
{
    return this->bairro;
}

void PontoDeColeta::setBairro(std::string bairro)
{
    this->bairro = bairro;
}

std::string PontoDeColeta::getCidade()
{
    return this->cidade;
}

void PontoDeColeta::setCidade(std::string cidade)
{
    this->cidade = cidade;
}

std::string PontoDeColeta::getEstado()
{
    return this->estado;
}

void PontoDeColeta::setEstado(std::string estado)
{
    this->estado = estado;
}