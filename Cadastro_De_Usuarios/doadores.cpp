//Aluno: Lucas de Oliveira Mota
#include "doadores.h"

//Construtor
Doador::Doador() : Usuario() {}

Doador::Doador(std::string cadastroNacional, std::string nome, std::string endereco, std::string telefone, std::string email) : Usuario(cadastroNacional, nome, endereco, telefone, email) {}

//Destrutor
Doador::~Doador() {}

//Getters e Setters
std::string Doador::getCadastroNacional() {
    return this->cadastroNacional;
}

void Doador::setCadastroNacional(std::string cadastroNacional) {
    this->cadastroNacional = cadastroNacional;
}

std::string Doador::getNome() {
    return this->nome;
}

void Doador::setNome(std::string nome) {
    this->nome = nome;
}

std::string Doador::getEndereco() {
    return this->endereco;
}

void Doador::setEndereco(std::string endereco) {
    this->endereco = endereco;
}

std::string Doador::getTelefone() {
    return this->telefone;
}

void Doador::setTelefone(std::string telefone) {
    this->telefone = telefone;
}

std::string Doador::getEmail() {
    return this->email;
}

void Doador::setEmail(std::string email) {
    this->email = email;
}

//Método(s)
void Doador::imprimeDados() {
    std::cout << "Cadastro Nacional: " << this->getCadastroNacional() << std::endl;
    std::cout << "Nome: "              << this->getNome()             << std::endl;
    std::cout << "Endereco: "          << this->getEndereco()         << std::endl;
    std::cout << "Telefone: "          << this->getTelefone()         << std::endl;
    std::cout << "Email: "             << this->getEmail()            << std::endl;
}