//Aluno: Lucas de Oliveira Mota
#include <iostream>
#include <string>
#include <cstdlib>

#include "cadastro.h"

/*
    Visão geral do programa: sistema de coleta seletiva

    Cadastro de usuários:
        doadores (Pessoa física ou jurídica) - lista de interesses
        receptores (Pessoa física ou jurídica) - lista de interesses
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

//Na função main, o usuário escolhe o tipo de cadastro que deseja fazer

int main() {
    int opcao;

    while (true) {
        //Menu inicial, Cadastro, Consulta, Atualizar, Excluir
        std::cout << "Bem vindo ao sistema de coleta seletiva" << std::endl;
        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "1 - Cadastro" << std::endl;
        std::cout << "2 - Consulta" << std::endl;
        std::cout << "3 - Atualizar" << std::endl;
        std::cout << "4 - Excluir" << std::endl;
        std::cout << "5 - Sair" << std::endl;
        std::cin >> opcao;

        system("clear||cls");
        if (opcao == 1) {
            //Cadastro
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Cadastro de usuários" << std::endl;
            std::cout << "2 - Cadastro de resíduos" << std::endl;
            std::cout << "3 - Cadastro de pontos de coleta" << std::endl;
            std::cout << "4 - Agendamento de coleta" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1) {
                //Cadastro de usuários
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Doador" << std::endl;
                std::cout << "2 - Receptor" << std::endl;
                std::cout << "3 - Recolhedor" << std::endl;
                std::cout << "4 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 3) {
                    Cadastro::novoCadastro(opcao);
                } else if (opcao == 4) {
                    continue;
                } else {
                    std::cout << "Opção inválida" << std::endl;
                }

            } else if (opcao == 2) {
                //Cadastro de resíduos
                std::cout << "Cadastro de resíduos" << std::endl;
            } else if (opcao == 3) {
                //Cadastro de pontos de coleta
                std::cout << "Cadastro de pontos de coleta" << std::endl;
            } else if (opcao == 4) {
                //Agendamento de coleta
                std::cout << "Agendamento de coleta" << std::endl;
            } else if (opcao == 5) {
                //Voltar
                std::cout << "Voltando..." << std::endl;
            } else {
                std::cout << "Opção inválida!" << std::endl;
            }
        } else if (opcao == 2) {
            //Consultar
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Consultar usuários" << std::endl;
            std::cout << "2 - Consultar resíduos" << std::endl;
            std::cout << "3 - Consultar pontos de coleta" << std::endl;
            std::cout << "4 - Consultar agendamentos" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1) {
                //Consultar usuários
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Doador" << std::endl;
                std::cout << "2 - Receptor" << std::endl;
                std::cout << "3 - Recolhedor" << std::endl;
                std::cout << "4 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 3) {
                    std::string cadastroNacional;
                    std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                    std::cin >> cadastroNacional;
                    Cadastro::consultarCadastro(cadastroNacional);
                } else if (opcao == 4) {
                    continue;
                } else {
                    std::cout << "Opção inválida" << std::endl;
                }
            } else if (opcao == 2) {
                //Consultar resíduos
                std::cout << "Consultar resíduos" << std::endl;
            } else if (opcao == 3) {
                //Consultar pontos de coleta
                std::cout << "Consultar pontos de coleta" << std::endl;
            } else if (opcao == 4) {
                //Consultar agendamentos
                std::cout << "Consultar agendamentos" << std::endl;
            } else if (opcao == 5) {
                //Voltar
                std::cout << "Voltando..." << std::endl;
            } else {
                std::cout << "Opção inválida!" << std::endl;
            }

        } else if (opcao == 3) {
            //Atualizar
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Atualizar usuários" << std::endl;
            std::cout << "2 - Atualizar resíduos" << std::endl;
            std::cout << "3 - Atualizar pontos de coleta" << std::endl;
            std::cout << "4 - Atualizar agendamentos" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1) {
                //Atualizar usuários
                std::cout << "Escolha uma opção:" << std::endl;
                std::cout << "1 - Doador" << std::endl;
                std::cout << "2 - Receptor" << std::endl;
                std::cout << "3 - Recolhedor" << std::endl;
                std::cout << "4 - Voltar" << std::endl;
                std::cin >> opcao;

                system("clear||cls");
                if (opcao >= 1 && opcao <= 3) {
                    std::string cadastroNacional;
                    std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                    std::cin >> cadastroNacional;
                    Cadastro::atualizarCadastro(opcao, cadastroNacional);
                } else if (opcao == 4) {
                    continue;
                } else {
                    std::cout << "Opção inválida" << std::endl;
                }
            } else if (opcao == 2) {
                //Atualizar resíduos
                std::cout << "Atualizar resíduos" << std::endl;
            } else if (opcao == 3) {
                //Atualizar pontos de coleta
                std::cout << "Atualizar pontos de coleta" << std::endl;
            } else if (opcao == 4) {
                //Atualizar agendamentos
                std::cout << "Atualizar agendamentos" << std::endl;
            } else if (opcao == 5) {
                //Voltar
                std::cout << "Voltando..." << std::endl;
            } else {
                std::cout << "Opção inválida!" << std::endl;
            }
        } else if (opcao == 4) {
            //Excluir
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Excluir usuários" << std::endl;
            std::cout << "2 - Excluir resíduos" << std::endl;
            std::cout << "3 - Excluir pontos de coleta" << std::endl;
            std::cout << "4 - Excluir agendamentos" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            system("clear||cls");
            if (opcao == 1) {
                system("clear||cls");
                std::string cadastroNacional;
                std::cout << "Digite o cadastro nacional(CPF/CNPJ) para consulta: ";
                std::cin >> cadastroNacional;
                Cadastro::deletarCadastro(cadastroNacional);
            } else if (opcao == 2) {
                //Excluir resíduos
                std::cout << "Excluir resíduos" << std::endl;
            } else if (opcao == 3) {
                //Excluir pontos de coleta
                std::cout << "Excluir pontos de coleta" << std::endl;
            } else if (opcao == 4) {
                //Excluir agendamentos
                std::cout << "Excluir agendamentos" << std::endl;
            } else if (opcao == 5) {
                //Voltar
                std::cout << "Voltando..." << std::endl;
            } else {
                std::cout << "Opção inválida!" << std::endl;
            }
        } else if (opcao == 5) {
            //Sair
            std::cout << "Saindo..." << std::endl;
            exit(0);
        } else {
            std::cout << "Opcao invalida!" << std::endl;
        }
    }
}