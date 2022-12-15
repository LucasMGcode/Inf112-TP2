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

void CadastroPontoDeColeta::atualizarCadastroPontoDeColeta(int opcao, std::string nome)
{
}

void CadastroPontoDeColeta::deletarCadastroPontoDeColeta(std::string nome)
{
}