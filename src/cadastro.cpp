//Aluno: Lucas de Oliveira Mota
//TO DO: tratamento de exceções
#include <cstring>

#include "cadastro.h"

void Cadastro::novoCadastro(int opcao) {
    std::string cadastroNacional, nome, endereco, telefone, email;
    std::ofstream arquivo;
    std::vector<Usuario> usuarios;

    std::cout << "Cadastro Nacional: ";
    std::cin >> cadastroNacional;

    std::cout << "Nome: ";
    std::cin.ignore();
    std::getline(std::cin, nome);

    std::cout << "Endereco: ";
    std::getline(std::cin, endereco);

    std::cout << "Telefone: ";
    std::getline(std::cin, telefone);

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
        arquivo << opcao << "&";
        arquivo << usuarios[i].getCadastroNacional() << "&";
        arquivo << usuarios[i].getNome()             << "&";
        arquivo << usuarios[i].getEndereco()         << "&";
        arquivo << usuarios[i].getTelefone()         << "&";
        arquivo << usuarios[i].getEmail() << std::endl;
    }

    arquivo.close();

    std::cout << "Cadastro realizado com sucesso!" << std::endl;
}

void Cadastro::consultarCadastro(std::string cadastroNacional) {
    std::ifstream arquivo;
    std::string linha, dado;
    std::vector<std::string> dados;

    arquivo.open("cadastro.txt");
    while (std::getline(arquivo, linha)) {
        std::stringstream ss(linha);
        while (std::getline(ss, dado, '&')) {
            dados.push_back(dado);
        }
    }

    for (int i = 0; i < dados.size(); i++) {
        if (dados[i] == cadastroNacional) {
            std::cout << "Cadastro Nacional: " << dados[i] << std::endl;
            std::cout << "Nome: " << dados[i+1] << std::endl;
            std::cout << "Endereco: " << dados[i+2] << std::endl;
            std::cout << "Telefone: " << dados[i+3] << std::endl;
            std::cout << "Email: " << dados[i+4] << std::endl;
        }
    }

    arquivo.close();
}

void Cadastro::atualizarCadastro(int opcao, std::string cadastroNacional) {
    std::fstream arquivoOld;
    std::ofstream arquivoNew;
    std::string linha, dado;
    std::vector<std::string> dados;

    arquivoOld.open("cadastro.txt");
    while (std::getline(arquivoOld, linha)) {
        std::stringstream ss(linha);
        while (std::getline(ss, dado, '&')) {
            dados.push_back(dado);
        }
    }

    std::string strOpc = std::to_string(opcao);
    std::cout << strOpc << std::endl;

    //Se o opcao seguido do cadastroNacional for igual ao dado do vetor, atualizar
    for (int i = 0; i < dados.size(); i++) {
        if (dados[i] == strOpc && dados[i+1] == cadastroNacional) {
                std::cout << "Nome: ";
                std::cin.ignore();
                std::getline(std::cin, dado);
                dados[i+1] = dado;

                std::cout << "Endereco: ";
                std::getline(std::cin, dado);
                dados[i+2] = dado;

                std::cout << "Telefone: ";
                std::getline(std::cin, dado);
                dados[i+3] = dado;

                std::cout << "Email: ";
                std::cin >> dado;
                dados[i+4] = dado;
        }
    }
    
    arquivoNew.open("temp.txt");
    for (int i = 0; i < dados.size(); i++) {
        arquivoNew << dados[i] << "&";
        if ((i+1) % 5 == 0) {
            arquivoNew << std::endl;
        }
    }

    arquivoOld.close();
    arquivoNew.close();

    //Aplicar tratamento de exceção
    remove("cadastro.txt");
    rename("temp.txt", "cadastro.txt");

    std::cout << "Cadastro atualizado com sucesso!" << std::endl;
}

void Cadastro::deletarCadastro(std::string cadastroNacional) {
        std::fstream arquivoOld;
        std::ofstream arquivoNew;
        std::string linha, dado;
        std::vector<std::string> dados;

        arquivoOld.open("cadastro.txt");
        while (std::getline(arquivoOld, linha)) {
            std::stringstream ss(linha);
            while (std::getline(ss, dado, '&')) {
                dados.push_back(dado);
            }
        }

        for (int i = 0; i < dados.size(); i++) {
            if (dados[i] == cadastroNacional) {
                dados.erase(dados.begin() + i);
                dados.erase(dados.begin() + i);
                dados.erase(dados.begin() + i);
                dados.erase(dados.begin() + i);
                dados.erase(dados.begin() + i);
            }
        }

        arquivoNew.open("temp.txt");
        for (int i = 0; i < dados.size(); i++) {
            arquivoNew << dados[i] << "&";
        }

        arquivoOld.close();
        arquivoNew.close();

        //Aplicar tratamento de exceção
        remove("cadastro.txt");
        rename("temp.txt", "cadastro.txt");

        std::cout << "Cadastro deletado com sucesso!" << std::endl;
}