// Aluno: Lucas de Oliveira Mota
//        Igor Cristian Acácio Josafá

#include <iostream>
#include <string>
#include <cstdlib>

#include "cadastroUsuario.h"
#include "cadastroResiduo.h"
#include "cadastroAgendamento.h"
#include "cadastroPontoDeColeta.h"

/*
    Visão geral do programa: sistema de coleta seletiva

    Cadastro de usuários:
        doadores (Pessoa física ou jurídica)   - TO DO: lista de interesses
        receptores (Pessoa física ou jurídica) - TO DO: lista de interesses
        recolhedores (Pessoa física ou jurídica)
    Cadastro de residuos:
        tipo de resíduo:
            - sólido (papel, plástico, vidro, metal, etc)
            - líquido (óleo, tinta, etc)
                - fornecer dica de recolhimento
    Cadastro de pontos de coleta:
        - tipo de resíduo
        - endereço
        - horário de funcionamento
        - telefone
        - email
        - site
        - facebook
        - twitter
        - instagram
        - etc
    Agendamento de coleta:
        - doador
        - receptor
        - recolhedor
        - data
        - horário
        - endereço
        - tipo de resíduo
        - quantidade
        - observações
*/

int main()
{
    int opcao;

    std::cout << "Bem vindo ao sistema de coleta seletiva" << std::endl;

    while (true)
    {
        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "1 - Cadastro" << std::endl;
        std::cout << "2 - Consulta" << std::endl;
        std::cout << "3 - Atualizar" << std::endl;
        std::cout << "4 - Excluir" << std::endl;
        std::cout << "5 - Sair" << std::endl;
        std::cin >> opcao;

        system("clear||cls");
        if (opcao == 1)
        {
            // Cadastro
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Cadastro de usuários" << std::endl;
            std::cout << "2 - Cadastro de resíduos" << std::endl;
            std::cout << "3 - Cadastro de pontos de coleta" << std::endl;
            std::cout << "4 - Agendamento de coleta" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1)
            {
                // Cadastro de usuários
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Doador" << std::endl;
                std::cout << "2 - Receptor" << std::endl;
                std::cout << "3 - Recolhedor" << std::endl;
                std::cout << "4 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 3)
                {
                    CadastroUsuario::novoCadastroUsuario(opcao);
                }
                else if (opcao == 4)
                {
                    continue;
                }
                else
                {
                    std::cout << "Opção inválida" << std::endl;
                }
            }
            else if (opcao == 2)
            {
                // Cadastro de resíduos
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Sólido" << std::endl;
                std::cout << "2 - Líquido" << std::endl;
                std::cout << "3 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 2)
                {
                    CadastroResiduo::novoCadastroResiduo(opcao);
                }
                else if (opcao == 3)
                {
                    continue;
                }
                else
                {
                    std::cout << "Opção inválida" << std::endl;
                }
                std::cout << "Cadastro de resíduos" << std::endl;
            }
            else if (opcao == 3)
            {
                // Cadastro de pontos de coleta
                CadastroPontoDeColeta::novoCadastroPontoDeColeta();
            }
            else if (opcao == 4)
            {
                // Agendamento de coleta
                std::cout << "Agendamento de coleta" << std::endl;
                CadastroAgendamento::novoCadastroAgendamento(opcao);
            }
            else if (opcao == 5)
            {
                // Voltar
                std::cout << "Voltando..." << std::endl;
            }
            else
            {
                std::cout << "Opção inválida!" << std::endl;
            }
        }
        else if (opcao == 2)
        {
            // Consultar
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Consultar usuários" << std::endl;
            std::cout << "2 - Consultar resíduos" << std::endl;
            std::cout << "3 - Consultar pontos de coleta" << std::endl;
            std::cout << "4 - Consultar agendamentos" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1)
            {
                // Consultar usuários
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Doador" << std::endl;
                std::cout << "2 - Receptor" << std::endl;
                std::cout << "3 - Recolhedor" << std::endl;
                std::cout << "4 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 3)
                {
                    std::string cadastroNacional;
                    std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                    std::cin >> cadastroNacional;
                    CadastroUsuario::consultarCadastroUsuario(opcao, cadastroNacional);
                }
                else if (opcao == 4)
                {
                    continue;
                }
                else
                {
                    std::cout << "Opção inválida" << std::endl;
                }
            }
            else if (opcao == 2)
            {
                // Consultar resíduos
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Sólido" << std::endl;
                std::cout << "2 - Líquido" << std::endl;
                std::cout << "3 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 2)
                {
                    std::string codigo;
                    std::cout << "Digite o nome do resíduo para consulta: ";
                    std::cin.ignore();
                    std::getline(std::cin, codigo);
                    CadastroResiduo::consultarCadastroResiduo(opcao, codigo);
                }
                else if (opcao == 3)
                {
                    continue;
                }
                else
                {
                    std::cout << "Opção inválida" << std::endl;
                }
            }
            else if (opcao == 3)
            {
                std::string cep;
                // Consultar pontos de coleta
                std::cout << "Digite o CEP para consulta: ";
                std::cin.ignore();
                std::getline(std::cin, cep);
                CadastroPontoDeColeta::consultarCadastroPontoDeColeta(cep);
            }
            else if (opcao == 4)
            {
                // Consultar agendamentos
                std::string CadastroAgendamento;
                std::cout << "Consultar agendamentos" << std::endl;
                std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                std::cin.ignore();
                std::getline(std::cin, CadastroAgendamento);
                CadastroAgendamento::consultarCadastroAgendamento(opcao, CadastroAgendamento);
            }
            else if (opcao == 5)
            {
                // Voltar
                std::cout << "Voltando..." << std::endl;
            }
            else
            {
                std::cout << "Opção inválida!" << std::endl;
            }
        }
        else if (opcao == 3)
        {
            // Atualizar
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Atualizar usuários" << std::endl;
            std::cout << "2 - Atualizar resíduos" << std::endl;
            std::cout << "3 - Atualizar pontos de coleta" << std::endl;
            std::cout << "4 - Atualizar agendamentos" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1)
            {
                // Atualizar usuários
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Doador" << std::endl;
                std::cout << "2 - Receptor" << std::endl;
                std::cout << "3 - Recolhedor" << std::endl;
                std::cout << "4 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 3)
                {
                    std::string cadastroNacional;
                    std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                    std::cin >> cadastroNacional;
                    CadastroUsuario::atualizarCadastroUsuario(opcao, cadastroNacional);
                }
                else if (opcao == 4)
                {
                    continue;
                }
                else
                {
                    std::cout << "Opção inválida" << std::endl;
                }
            }
            else if (opcao == 2)
            {
                // Atualizar resíduos
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Sólido" << std::endl;
                std::cout << "2 - Líquido" << std::endl;
                std::cout << "3 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 2)
                {
                    std::string nome;
                    std::cout << "Digite o nome do residuo para atualizar: ";
                    std::cin >> nome;
                    CadastroResiduo::atualizarCadastroResiduo(opcao, nome);
                }
                else if (opcao == 3)
                {
                    continue;
                }
                else
                {
                    std::cout << "Opção inválida" << std::endl;
                }
            }
            else if (opcao == 3)
            {
                std::string cep;
                // Atualizar pontos de coleta
                std::cout << "Digite o CEP para atualizar: ";
                std::cin.ignore();
                std::getline(std::cin, cep);
                CadastroPontoDeColeta::atualizarCadastroPontoDeColeta(cep);
            }
            else if (opcao == 4)
            {
                std::string cadastroagendamento;
                // Atualizar agendamentos
                std::cout << "Atualizar agendamentos" << std::endl;
                std::cout << "Digite o cadastro nacional(CPF/CNPJ) para atualizar: ";
                std::cin.ignore();
                std::getline(std::cin, cadastroagendamento);
                CadastroAgendamento::atualizarCadastroAgendamento(opcao, cadastroagendamento);
            }
            else if (opcao == 5)
            {
                // Voltar
                std::cout << "Voltando..." << std::endl;
            }
            else
            {
                std::cout << "Opção inválida!" << std::endl;
            }
        }
        else if (opcao == 4)
        {
            // Excluir
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Excluir usuários" << std::endl;
            std::cout << "2 - Excluir resíduos" << std::endl;
            std::cout << "3 - Excluir pontos de coleta" << std::endl;
            std::cout << "4 - Excluir agendamentos" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1)
            {
                system("clear||cls");
                std::string cadastroNacional;
                std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                std::cin >> cadastroNacional;
                CadastroUsuario::deletarCadastroUsuario(cadastroNacional);
            }
            else if (opcao == 2)
            {
                // Excluir resíduos
                system("clear||cls");
                std::string nome;
                std::cout << "Digite o nome do resíduo: ";
                std::cin >> nome;
                CadastroResiduo::deletarCadastroResiduo(nome);
            }
            else if (opcao == 3)
            {
                // Excluir pontos de coleta
                std::string cep;
                std::cout << "Digite o CEP para excluir: ";
                std::cin.ignore();
                std::getline(std::cin, cep);
                CadastroPontoDeColeta::deletarCadastroPontoDeColeta(cep);
            }
            else if (opcao == 4)
            {
                // Excluir agendamentos
                std::string cadastroagendamento;
                std::cout << "Excluir agendamentos" << std::endl;
                std::cout << "Digite o cadastro nacional(CPF/CNPJ) para excluir: ";
                std::cin.ignore();
                std::getline(std::cin, cadastroagendamento);
                CadastroAgendamento::deletarCadastroAgendamento(opcao, cadastroagendamento);
            }
            else if (opcao == 5)
            {
                // Voltar
                std::cout << "Voltando..." << std::endl;
            }
            else
            {
                std::cout << "Opção inválida!" << std::endl;
            }
        }
        else if (opcao == 5)
        {
            // Sair
            std::cout << "Saindo..." << std::endl;
            exit(0);
        }
        else
        {
            std::cout << "Opcao invalida!" << std::endl;
        }
    }
}