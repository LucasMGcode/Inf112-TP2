//Aluno: Lucas Mota, Igor Acácio
#include "usuario.h"

//Getters
std::string Usuario::getCadastroNacional() {
    return cadastroNacional;
}

std::string Usuario::getNome() {
    return nome;
}

std::string Usuario::getEndereco() {
    return endereco;
}

std::string Usuario::getTelefone() {
    return telefone;
}

std::string Usuario::getEmail() {
    return email;
}

//Método(s)
void Usuario::imprimeDados(Usuario &usuario) {
    std::cout << "Cadastro Nacional: " << usuario.getCadastroNacional() << std::endl;
    std::cout << "Nome: " << usuario.getNome() << std::endl;
    std::cout << "Endereço: " << usuario.getEndereco() << std::endl;
    std::cout << "Telefone: " << usuario.getTelefone() << std::endl;
    std::cout << "E-mail: " << usuario.getEmail() << std::endl;
}