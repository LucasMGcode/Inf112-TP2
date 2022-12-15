//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  

//TO DO: tratamento de exceções
//TO DO: revisar o código
//TO DO: tornar classes usuários mais específicas

#include <iostream>
#include <cstring>

#include "cadastroUsuario.h"

// Criar um novo cadastro
void
CadastroUsuario::novoCadastroUsuario(int opcao)
{
    std::string cadastroNacional, nome, endereco, telefone, email;
    std::ofstream arquivo;
    std::vector<Usuario> usuarios;

    std::cout << "Cadastro Nacional: ";
    std::cin.ignore();
    std::getline(std::cin, cadastroNacional);

    std::cout << "Nome: ";
    std::getline(std::cin, nome);

    std::cout << "Endereco: ";
    std::getline(std::cin, endereco);

    std::cout << "Telefone: ";
    std::getline(std::cin, telefone);

    std::cout << "Email: ";
    std::getline(std::cin, email);

    if (opcao == 1)
    {
        Doador doador(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(doador);
    }
    else if (opcao == 2)
    {
        Receptor receptor(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(receptor);
    }
    else if (opcao == 3)
    {
        Recolhedor recolhedor(cadastroNacional, nome, endereco, telefone, email);
        usuarios.push_back(recolhedor);
    }

    arquivo.open("cadastro.txt", std::ios::app);
    for (int i = 0; i < usuarios.size(); i++)
    {
        arquivo << opcao << "&";
        arquivo << usuarios[i].getCadastroNacional() << "&";
        arquivo << usuarios[i].getNome() << "&";
        arquivo << usuarios[i].getEndereco() << "&";
        arquivo << usuarios[i].getTelefone() << "&";
        arquivo << usuarios[i].getEmail() << "&\n";
    }

    arquivo.close();

    system("clear||cls");
    std::cout << "Cadastro realizado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}

// Consulta o cadastro através do cadastro nacional(CPF/CNPJ).
void
CadastroUsuario::consultarCadastroUsuario(int opcao, std::string cadastroNacional)
{
    std::ifstream arquivo;
    std::string linha, dado;
    std::vector<std::string> dados;
    std::string tipoUsuario[3] = {"Doador", "Receptor", "Recolhedor"};

    arquivo.open("cadastro.txt");
    while (std::getline(arquivo, linha))
    {
        std::stringstream ss(linha);
        while (std::getline(ss, dado, '&'))
        {
            dados.push_back(dado);
        }
    }

    // Conta quantas vezes o cadastroNacional aparece no vetor
    int cont = 0;
    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == cadastroNacional)
        {
            cont++;
        }
    }

    // Se o cadastroNacional aparecer mais de uma vez, mostrar todos os cadastros
    if (cont >= 1)
    {
        int achou = 0; // Auxilia na comunicação com o usuário
        for (int i = 0; i < dados.size(); i++)
        {
            if (dados[i] == cadastroNacional)
            {
                achou++;
                int aux = stoi(dados[i - 1]); // Converte a string encontrada para inteiro

                if (achou > 1)
                {
                    std::cout << std::endl;
                }
                if (aux == opcao)
                {
                    std::cout << achou << "º Cadastro encontrado." << std::endl;
                    std::cout << "Tipo de cadastro: " << tipoUsuario[opcao] << std::endl;
                    std::cout << "Cadastro Nacional: " << dados[i] << std::endl;
                    std::cout << "Nome: " << dados[i + 1] << std::endl;
                    std::cout << "Endereco: " << dados[i + 2] << std::endl;
                    std::cout << "Telefone: " << dados[i + 3] << std::endl;
                    std::cout << "Email: " << dados[i + 4] << std::endl;
                }
                else
                {
                    std::cout << "Cadastro encontrado, mas nao corresponde ao tipo de usuário informado." << std::endl;
                    std::cout << achou << "º Cadastro encontrado." << std::endl;
                    std::cout << "Tipo de cadastro: " << tipoUsuario[aux] << std::endl;
                    std::cout << "Cadastro Nacional: " << dados[i] << std::endl;
                    std::cout << "Nome: " << dados[i + 1] << std::endl;
                    std::cout << "Endereco: " << dados[i + 2] << std::endl;
                    std::cout << "Telefone: " << dados[i + 3] << std::endl;
                    std::cout << "Email: " << dados[i + 4] << std::endl;
                }
            }
        }
    }
    else
    {
        std::cout << "Cadastro nao encontrado!" << std::endl;
    }

    arquivo.close();

    std::cout << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}

// Atualiza o cadastro através do cadastro nacional(CPF/CNPJ) e do tipo de cadastro de usuário (Doador, Receptor ou Recolhedor).
void
CadastroUsuario::atualizarCadastroUsuario(int opcao, std::string cadastroNacional)
{
    std::fstream arquivoOld;
    std::ofstream arquivoNew;
    std::string linha, dado;
    std::vector<std::string> dados;
    int itensPorLinha = 0, numeroDeLinhas = 0;
    bool achou = false;

    arquivoOld.open("cadastro.txt");
    while (std::getline(arquivoOld, linha))
    {
        std::stringstream ss(linha);
        numeroDeLinhas++;
        while (std::getline(ss, dado, '&'))
        {
            if (numeroDeLinhas == 1)
            {
                itensPorLinha++;
            }
            dados.push_back(dado);
        }
    }

    std::string strOpc = std::to_string(opcao);

    // Recebe os novos dados do cadastro
    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == strOpc && dados[i + 1] == cadastroNacional)
        {
            std::cout << "Nome: ";
            std::cin.ignore();
            std::getline(std::cin, dado);
            dados[i + 2] = dado;

            std::cout << "Endereco: ";
            std::getline(std::cin, dado);
            dados[i + 3] = dado;

            std::cout << "Telefone: ";
            std::getline(std::cin, dado);
            dados[i + 4] = dado;

            std::cout << "Email: ";
            std::cin >> dado;
            dados[i + 5] = dado;

            achou = true;
        }
    }

    if (!achou)
    {
        arquivoOld.close();
        arquivoNew.close();
        std::cout << "Cadastro nao encontrado!" << std::endl;
        std::cout << std::endl;
        std::cout << "Pressione ENTER para continuar..." << std::endl;
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
        return;
    }
    else
    {
        // Reescreve o arquivo com os novos dados
        arquivoNew.open("temp.txt");
        for (int i = 0; i < numeroDeLinhas; i++)
        {
            for (int j = 0; j < itensPorLinha; j++)
            {
                arquivoNew << dados[(i * itensPorLinha) + j] << "&";
            }
            arquivoNew << "\n";
        }

        arquivoOld.close();
        arquivoNew.close();

        // Aplicar tratamento de exceção
        remove("cadastro.txt");
        rename("temp.txt", "cadastro.txt");

        std::cout << "Cadastro atualizado com sucesso!" << std::endl;
        std::cout << std::endl;
        std::cout << "Pressione ENTER para continuar..." << std::endl;
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
    }
}

// Deleta o cadastro através do cadastro nacional(CPF/CNPJ).
void
CadastroUsuario::deletarCadastroUsuario(std::string cadastroNacional)
{
    std::fstream arquivoOld;
    std::ofstream arquivoNew;
    std::string linha, dado;
    int itensPorLinha = 0, numeroDeLinhas = 0;
    std::vector<std::string> dados;

    arquivoOld.open("cadastro.txt");
    while (std::getline(arquivoOld, linha))
    {
        std::stringstream ss(linha);
        numeroDeLinhas++;
        while (std::getline(ss, dado, '&'))
        {
            if (numeroDeLinhas == 1)
            {
                itensPorLinha++;
            }
            dados.push_back(dado);
        }
    }

    // Apaga o cadastro
    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == cadastroNacional)
        {
            dados.erase(dados.begin() + i - 1);
            for (int j = 0; j < itensPorLinha - 1; j++)
            {
                dados.erase(dados.begin() + i);
            }
        }
    }

    // Reescreve o arquivo
    arquivoNew.open("temp.txt");
    for (int i = 0; i < numeroDeLinhas - 1; i++)
    {
        for (int j = 0; j < itensPorLinha; j++)
        {
            arquivoNew << dados[(i * itensPorLinha) + j] << "&";
        }
        arquivoNew << "\n";
    }

    arquivoOld.close();
    arquivoNew.close();

    // Aplicar tratamento de exceção
    remove("cadastro.txt");
    rename("temp.txt", "cadastro.txt");

    std::cout << "Cadastro deletado com sucesso!" << std::endl;
}