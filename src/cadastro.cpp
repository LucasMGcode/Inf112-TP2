//Aluno: Lucas de Oliveira Mota
//TO DO: tratamento de exceções
#include "cadastro.h"

void novoCadastro(int opcao) {
    std::string cadastroNacional, nome, endereco, telefone, email;
    std::ofstream arquivo;
    std::vector<Usuario> usuarios;

    std::cout << "Cadastro Nacional: ";
    std::cin >> cadastroNacional;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "Endereco: ";
    std::cin >> endereco;
    std::cout << "Telefone: ";
    std::cin >> telefone;
    std::cout << "Email: ";
    std::cin >> email;

    if (opcao == 1) {
        Doador doador(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(doador);
    } else if (opcao == 2) {
        Receptor receptor(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(receptor);
    } else if (opcao == 3) {
        Recolhedor recolhedor(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(recolhedor);
    }

    arquivo.open("cadastro.txt", std::ios::app);
    for(int i = 0; i < usuarios.size(); i++) {
        arquivo << usuarios[i].getCadastroNacional() << " ";
        arquivo << usuarios[i].getNome()             << " ";
        arquivo << usuarios[i].getEndereco()         << " ";
        arquivo << usuarios[i].getTelefone()         << " ";
        arquivo << usuarios[i].getEmail();
    }

    arquivo.close();

    std::cout << "Cadastro realizado com sucesso!" << std::endl;
}

void consultarCadastro(std::string cadastroNacional) {
    /*std::ifstream arquivo;
    std::string linha;
    std::vector<Usuario> usuarios;

    arquivo.open("cadastro.txt");
    while (std::getline(arquivo, linha)) {
        std::stringstream ss(linha);
        std::string cadastroNacional, nome, endereco, telefone, email;
        ss >> cadastroNacional >> nome >> endereco >> telefone >> email;
        Usuario usuario(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(usuario);
    }

    for(int i = 0; i < usuarios.size(); i++) {
        if (usuarios[i].getCadastroNacional() == cadastroNacional) {
            std::cout << "Cadastro Nacional: " << usuarios[i].getCadastroNacional() << std::endl;
            std::cout << "Nome: "              << usuarios[i].getNome()             << std::endl;
            std::cout << "Endereco: "          << usuarios[i].getEndereco()         << std::endl;
            std::cout << "Telefone: "          << usuarios[i].getTelefone()         << std::endl;
            std::cout << "Email: "             << usuarios[i].getEmail()            << std::endl;
        }
    }

    arquivo.close();*/
}

void atualizarCadastro() {

}

void deletarCadastro() {

}