// Aluno: Lucas de Oliveira Mota
//        Igor Cristian Acácio Josafá
// TO DO: tratamento de exceções

#include <iostream>
#include <cstring>

#include "cadastroResiduo.h"

// Criar um novo cadastro para residuo
void CadastroResiduo::novoCadastroResiduo(int opcao)
{
    // Variáveis
    int tipo;
    double peso, volume;
    std::string nome, descricao, dicaRecolhimento;
    std::ofstream arquivo;
    std::vector<Residuo> residuos;

    // Entrada genérica
    /*do {
        std::cout << "Tipo (1 = sólido, 2 = líquido): ";
        std::cin >> tipo;
    } while (tipo != 1 && tipo != 2);*/
    tipo = opcao;

    std::cout << "Nome: ";
    std::cin.ignore();
    std::getline(std::cin, nome);

    std::cout << "Descrição: ";
    std::getline(std::cin, descricao);

    std::cout << "Dica de Recolhimento: ";
    std::getline(std::cin, dicaRecolhimento);

    // Entrada específica
    if (opcao == 1)
    {
        /*std::cout << "Peso em gramas: ";
        std::cin >> peso;*/

        Liquido solido(tipo, nome, descricao, dicaRecolhimento, peso);
        residuos.push_back(solido);
    }
    else if (opcao == 2)
    {
        /*std::cout << "Volume em litros: ";
        std::cin >> volume;*/

        Solido liquido(tipo, nome, descricao, dicaRecolhimento, volume);
        residuos.push_back(liquido);
    }

    // Gravação no arquivo
    arquivo.open("cadastroResiduo.txt", std::ios::app);
    for (int i = 0; i < residuos.size(); i++)
    {
        arquivo << residuos[i].getTipo() << "&";
        arquivo << residuos[i].getNome() << "&";
        arquivo << residuos[i].getDescricao() << "&";
        arquivo << residuos[i].getDicaRecolhimento() << "&\n";
    }

    arquivo.close();

    system("clear||cls");
    std::cout << "Cadastro realizado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}

// Consulta por nome
void CadastroResiduo::consultarCadastroResiduo(int opcao, std::string nome)
{
    std::ifstream arquivo;
    std::string linha, dado;
    std::vector<std::string> dados;
    std::string tipoResiduo[2] = {"Sólido", "Líquido"};

    // Lê o arquivo e armazena os dados em um vetor de strings
    arquivo.open("cadastroResiduo.txt");
    while (std::getline(arquivo, linha))
    {
        std::stringstream ss(linha);
        while (std::getline(ss, dado, '&'))
        {
            dados.push_back(dado);
        }
    }

    // Conta quantas vezes o nome aparece no vetor de dados
    int cont = 0;
    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == nome)
        {
            cont++;
        }
    }

    if (cont >= 1)
    {
        int achou = 0;
        for (int i = 0; i < dados.size(); i++)
        {
            if (dados[i] == nome)
            {
                achou++;
                int aux = stoi(dados[i - 1]);

                if (achou > 1)
                {
                    std::cout << std::endl;
                }
                if (aux == opcao)
                {
                    std::cout << achou << "º Cadastro." << std::endl;
                    std::cout << "Tipo: " << tipoResiduo[aux - 1] << std::endl;
                    std::cout << "Nome: " << dados[i] << std::endl;
                    std::cout << "Descrição: " << dados[i + 1] << std::endl;
                    std::cout << "Dica de Recolhimento: " << dados[i + 2] << std::endl;
                }
                else
                {
                    std::cout << "Não foi encontrado nenhum cadastro com esse nome e tipo." << std::endl;
                }
            }
        }
    }
    else
    {
        std::cout << "Não foi encontrado nenhum cadastro com esse nome." << std::endl;
    }

    arquivo.close();

    std::cout << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}

void CadastroResiduo::atualizarCadastroResiduo(int opcao, std::string nome)
{
    std::fstream arquivoOld;
    std::ofstream arquivoNew;
    std::string linha, dado;
    std::vector<std::string> dados;
    int itenPorLinha = 0, numeroLinhas = 0;
    bool achou = false;

    arquivoOld.open("cadastroResiduo.txt");
    while (std::getline(arquivoOld, linha))
    {
        std::stringstream ss(linha);
        numeroLinhas++;
        while (std::getline(ss, dado, '&'))
        {
            if (numeroLinhas == 1)
            {
                itenPorLinha++;
            }
            dados.push_back(dado);
        }
    }

    std::string strOpc = std::to_string(opcao);

    // Receber os novos dados do cadastro
    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == strOpc && dados[i + 1] == nome)
        {
            std::cout << "Descrição: ";
            std::cin.ignore();
            std::getline(std::cin, dados[i + 2]);

            std::cout << "Dica de Recolhimento: ";
            std::getline(std::cin, dados[i + 3]);

            achou = true;
        }
    }

    if (achou)
    {
        arquivoNew.open("cadastroResiduo.txt");
        for (int i = 0; i < dados.size(); i++)
        {
            if (i % itenPorLinha == 0 && i != 0)
            {
                arquivoNew << std::endl;
            }
            arquivoNew << dados[i] << "&";
        }
        arquivoNew.close();

        std::cout << std::endl;
        std::cout << "Cadastro atualizado com sucesso!" << std::endl;
        std::cout << "Pressione ENTER para continuar..." << std::endl;
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
    }
    else
    {
        std::cout << "Não foi encontrado nenhum cadastro com esse nome e tipo." << std::endl;
        std::cout << "Pressione ENTER para continuar...";
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
    }
}

void CadastroResiduo::deletarCadastroResiduo(std::string nome)
{
    if (nome == "")
    {
        std::cout << "Não foi encontrado nenhum cadastro com esse nome." << std::endl;
        std::cout << std::endl;
        std::cout << "Pressione ENTER para continuar..." << std::endl;
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
        return;
    }

    std::fstream arquivoOld;
    std::ofstream arquivoNew;
    std::string linha, dado;
    int itensPorLinha = 0, numeroLinhas = 0;
    std::vector<std::string> dados;

    arquivoOld.open("cadastroResiduo.txt");
    while (std::getline(arquivoOld, linha))
    {
        std::stringstream ss(linha);
        numeroLinhas++;
        while (std::getline(ss, dado, '&'))
        {
            if (numeroLinhas == 1)
            {
                itensPorLinha++;
            }
            dados.push_back(dado);
        }
    }

    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == nome)
        {
            dados.erase(dados.begin() + i - 1);
            for (int j = 0; j < itensPorLinha; j++)
            {
                dados.erase(dados.begin() + i);
            }
        }
    }

    arquivoNew.open("temp.txt");
    for (int i = 0; i < numeroLinhas - 1; i++)
    {
        for (int j = 0; j < itensPorLinha; j++)
        {
            arquivoNew << dados[i * itensPorLinha + j] << "&";
        }
        arquivoNew << "\n";
    }

    arquivoNew.close();
    arquivoOld.close();

    remove("cadastroResiduo.txt");
    rename("temp.txt", "cadastroResiduo.txt");

    system("clear||cls");
    std::cout << "Cadastro deletado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar...";
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}