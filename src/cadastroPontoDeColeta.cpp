// Aluno: Lucas Mota, Igor Acácio

#include "cadastroPontoDeColeta.h"

void CadastroPontoDeColeta::novoCadastroPontoDeColeta()
{
    std::string cep, nome, endereco, bairro, cidade, estado;
    std::ofstream arquivo;
    std::vector<PontoDeColeta> pontosDeColeta;

    std::cout << "Digite o CEP do ponto de coleta: ";
    std::cin.ignore();
    std::getline(std::cin, cep);

    std::cout << "Digite o nome do ponto de coleta: ";
    std::getline(std::cin, nome);

    std::cout << "Digite o endereço do ponto de coleta: ";
    std::getline(std::cin, endereco);

    std::cout << "Digite o bairro do ponto de coleta: ";
    std::getline(std::cin, bairro);

    std::cout << "Digite a cidade do ponto de coleta: ";
    std::getline(std::cin, cidade);

    std::cout << "Digite o estado do ponto de coleta: ";
    std::getline(std::cin, estado);

    PontoDeColeta pontoDeColeta(cep, nome, endereco, bairro, cidade, estado);
    pontosDeColeta.push_back(pontoDeColeta);

    arquivo.open("pontosDeColeta.txt", std::ios::app);
    for (int i = 0; i < pontosDeColeta.size(); i++)
    {
        arquivo << pontosDeColeta[i].getCep() << "&";
        arquivo << pontosDeColeta[i].getNome() << "&";
        arquivo << pontosDeColeta[i].getEndereco() << "&";
        arquivo << pontosDeColeta[i].getBairro() << "&";
        arquivo << pontosDeColeta[i].getCidade() << "&";
        arquivo << pontosDeColeta[i].getEstado() << "&\n";
    }

    arquivo.close();

    system("clear||cls");
    std::cout << "Ponto de coleta cadastrado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar...";
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}

//Consulta por CEP
void CadastroPontoDeColeta::consultarCadastroPontoDeColeta(std::string cep)
{
    std::ifstream arquivo;
    std::string linha, dado;
    std::vector<std::string> dados;
    
    arquivo.open("pontosDeColeta.txt");
    while (std::getline(arquivo, linha))
    {
        std::stringstream ss(linha);
        while (std::getline(ss, dado, '&'))
        {
            dados.push_back(dado);
        }
    }

    int cont = 0;
    for (int i = 0; i < dados.size(); i++)
    {
        if (dados[i] == cep)
        {
            cont++;
        }
    }

    if (cont >= 1)
    {
        int achou = 0;
        for (int i = 0; i < dados.size(); i++)
        {
            if (dados[i] == cep)
            {
                achou++;
                
                if (achou > 1)
                {
                    std::cout << std::endl;
                }
                std::cout << achou << "º ponto de coleta encontrado:" << std::endl;
                std::cout << "CEP: " << dados[i] << std::endl;
                std::cout << "Nome: " << dados[i + 1] << std::endl;
                std::cout << "Endereço: " << dados[i + 2] << std::endl;
                std::cout << "Bairro: " << dados[i + 3] << std::endl;
                std::cout << "Cidade: " << dados[i + 4] << std::endl;
                std::cout << "Estado: " << dados[i + 5] << std::endl;
            }
        }
    }
    else
    {
        std::cout << "Nenhum ponto de coleta encontrado com o CEP informado!" << std::endl;
    }

    arquivo.close();

    std::cout << "Pressione ENTER para continuar...";
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}

void CadastroPontoDeColeta::atualizarCadastroPontoDeColeta(std::string cep)
{
    std::fstream arquivoOld;
    std::ofstream arquivoNew;
    std::string linha, dado;
    std::vector<std::string> dados;
    int itensPorLinha = 0, numeroLinhas = 0;
    bool achou = false;

    arquivoOld.open("pontosDeColeta.txt");
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
        if (dados[i] == cep)
        {
            achou = true;
            std::cout << "Digite o novo CEP do ponto de coleta: ";
            std::cin.ignore();
            std::getline(std::cin, dado);
            dados[i] = dado;

            std::cout << "Digite o novo nome do ponto de coleta: ";
            std::getline(std::cin, dado);
            dados[i + 1] = dado;

            std::cout << "Digite o novo endereço do ponto de coleta: ";
            std::getline(std::cin, dado);
            dados[i + 2] = dado;

            std::cout << "Digite o novo bairro do ponto de coleta: ";
            std::getline(std::cin, dado);
            dados[i + 3] = dado;

            std::cout << "Digite a nova cidade do ponto de coleta: ";
            std::getline(std::cin, dado);
            dados[i + 4] = dado;

            std::cout << "Digite o novo estado do ponto de coleta: ";
            std::getline(std::cin, dado);
            dados[i + 5] = dado;

            achou = true;
        }
    }

    if (achou)
    {
        arquivoOld.close();
        arquivoNew.open("pontosDeColeta.txt");
        for (int i = 0; i < dados.size(); i++)
        {
            if (i % itensPorLinha == 0 && i != 0)
            {
                arquivoNew << std::endl;
            }
            arquivoNew << dados[i] << "&";
        }
        arquivoNew.close();

        system("clear||cls");
        std::cout << "Ponto de coleta atualizado com sucesso!" << std::endl;
        std::cout << "Pressione ENTER para continuar...";
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
    }
    else
    {
        arquivoOld.close();
        system("clear||cls");
        std::cout << "Nenhum ponto de coleta encontrado com o CEP informado!" << std::endl;
        std::cout << "Pressione ENTER para continuar...";
        std::cin.ignore();
        std::cin.get();
        system("clear||cls");
    }
}

void CadastroPontoDeColeta::deletarCadastroPontoDeColeta(std::string cep)
{
    if (cep == "")
    {
        std::cout << "Não é possível deletar um ponto de coleta sem informar o CEP!" << std::endl;
        std::cout << "Pressione ENTER para continuar...";
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
    
    arquivoOld.open("pontosDeColeta.txt");
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
        if (dados[i] == cep)
        {
            for (int j = 0; j < itensPorLinha; j++)
            {
                dados.erase(dados.begin() + i);
            }
        }
    }

    arquivoNew.open("pontosDeColeta.txt");
    for (int i = 0; i < numeroLinhas - 1; i++)
    {
        for (int j = 0; j < itensPorLinha; j++)
        {
            arquivoNew << dados[i * itensPorLinha + j] << "&";
        }
        arquivoNew << "\n";
    }

    arquivoOld.close();
    arquivoNew.close();

    remove("pontosDeColeta.txt");
    rename("pontosDeColeta.txt", "pontosDeColeta.txt");

    system("clear||cls");
    std::cout << "Ponto de coleta deletado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar...";
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}