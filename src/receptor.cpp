//Aluno: Lucas de Oliveira Mota
#include "receptor.h"

//Construtor
Receptor::Receptor(std::string cadastroNacional, std::string nome, std::string endereco, std::string telefone, std::string email) {
    this->cadastroNacional = cadastroNacional;
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
    this->email = email;
}

//Destrutor
Receptor::~Receptor() {}