//Aluno: Lucas de Oliveira Mota
#include <iostream>

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

    //Menu inicial, Cadastro, Consulta, Atualizar, Excluir
    std::cout << "Bem vindo ao sistema de coleta seletiva" << std::endl;
    std::cout << "Escolha uma opção:" << std::endl;
    std::cout << "1 - Cadastro" << std::endl;
    std::cout << "2 - Consulta" << std::endl;
    std::cout << "3 - Atualizar" << std::endl;
    std::cout << "4 - Excluir" << std::endl;
    std::cout << "5 - Sair" << std::endl;
    std::cin >> opcao;

    switch (opcao) {
        case 1:
            //Menu de cadastro, Usuário, Resíduo, Ponto de coleta, Agendamento
            std::cout << "Escolha uma opção:" << std::endl;
            std::cout << "1 - Usuário" << std::endl;
            std::cout << "2 - Resíduo" << std::endl;
            std::cout << "3 - Ponto de coleta" << std::endl;
            std::cout << "4 - Agendamento" << std::endl;
            std::cout << "5 - Voltar" << std::endl;
            std::cin >> opcao;

            switch (opcao) {
                case 1:
                    //Cadastro de usuário
                    //Menu de cadastro de usuário, Doador, Receptor, Recolhedor
                    std::cout << "Escolha uma opção:" << std::endl;
                    std::cout << "1 - Doador" << std::endl;
                    std::cout << "2 - Receptor" << std::endl;
                    std::cout << "3 - Recolhedor" << std::endl;
                    std::cout << "4 - Voltar" << std::endl;
                    std::cin >> opcao;

                    switch (opcao) {
                        case 1:
                            //Cadastro de doador
                            //Menu de cadastro de doador, Pessoa física, Pessoa jurídica
                            std::cout << "Escolha uma opção:" << std::endl;
                            std::cout << "1 - Pessoa física" << std::endl;
                            std::cout << "2 - Pessoa jurídica" << std::endl;
                            std::cout << "3 - Voltar" << std::endl;
                            std::cin >> opcao;

                            switch (opcao) {
                                case 1:
                                    //Cadastro de doador pessoa física
                                    //Menu de cadastro de doador pessoa física, Nome, CPF, Endereço, Telefone, Email, Interesses
                                    /* Scopo pessoa física */ {
                                        std::string nome, cpf, endereco, telefone, email;
                                        std::cout << "Preencha os dados:" << std::endl;
                                        std::cout << "Nome: ";
                                        std::cin >> nome;
                                        std::cout << "CPF: ";
                                        std::cin >> cpf;
                                        std::cout << "Endereço: ";
                                        std::cin >> endereco;
                                        std::cout << "Telefone: ";
                                        std::cin >> telefone;
                                        std::cout << "Email: ";
                                        std::cin >> email;
                                    } { std::cout << "Interesses: ";
                                    //Menu de interesses, Papel, Plástico, Vidro, Metal, Lixo eletrônico, Óleo, Tinta, etc
                                        std::cout << "1 para sim, 0 para não" << std::endl;
                                        bool interesse;
                                        std::cout << "Papel: ";
                                        std::cin >> interesse;
                                        std::cout << "Plástico: ";
                                        std::cin >> interesse;
                                        std::cout << "Vidro: ";
                                        std::cin >> interesse;
                                        std::cout << "Metal: ";
                                        std::cin >> interesse;
                                        std::cout << "Lixo eletrônico: ";
                                        std::cin >> interesse;
                                        std::cout << "Óleo: ";
                                        std::cin >> interesse;
                                        std::cout << "Tinta: ";
                                        std::cin >> interesse;
                                    }
                                    std::cout << "Voltar" << std::endl;
                                    break;
                                case 2:
                                    //Cadastro de doador pessoa jurídica
                                    //Menu de cadastro de doador pessoa jurídica, Nome, CNPJ, Endereço, Telefone, Email, Interesses
                                    /* Scopo pessoa jurídica */ {
                                        std::string nome, cnpj, endereco, telefone, email;
                                        std::cout << "Preencha os dados:" << std::endl;
                                        std::cout << "Nome: ";
                                        std::cin >> nome;
                                        std::cout << "CNPJ: ";
                                        std::cin >> cnpj;
                                        std::cout << "Endereço: ";
                                        std::cin >> endereco;
                                        std::cout << "Telefone: ";
                                        std::cin >> telefone;
                                        std::cout << "Email: ";
                                        std::cin >> email;
                                    } { std::cout << "Interesses: ";
                                    //Menu de interesses, Papel, Plástico, Vidro, Metal, Lixo eletrônico, Óleo, Tinta, etc
                                        std::cout << "1 para sim, 0 para não" << std::endl;
                                        bool interesse;
                                        std::cout << "Papel: ";
                                        std::cin >> interesse;
                                        std::cout << "Plástico: ";
                                        std::cin >> interesse;
                                        std::cout << "Vidro: ";
                                        std::cin >> interesse;
                                        std::cout << "Metal: ";
                                        std::cin >> interesse;
                                        std::cout << "Lixo eletrônico: ";
                                        std::cin >> interesse;
                                        std::cout << "Óleo: ";
                                        std::cin >> interesse;
                                        std::cout << "Tinta: ";
                                        std::cin >> interesse;
                                    }
                                    std::cout << "Voltar" << std::endl;
                                    break;
                                case 3:
                                    //Voltar
                                    break;
                                default:
                                    std::cout << "Opção inválida" << std::endl;
                            }
                            break;
                        case 2:
                            //Cadastro de receptor
                            std::cout << "Cadastro de receptor" << std::endl;
                            break;
                        case 3:
                            //Cadastro de recolhedor
                            std::cout << "Cadastro de recolhedor" << std::endl;
                            break;
                        case 4:
                            //Voltar
                            std::cout << "Voltar" << std::endl;
                            break;
                        default:
                            std::cout << "Opção inválida" << std::endl;
                    }
                    break;
                case 2:
                    //Cadastro de resíduo
                    //Menu de cadastro de resíduo, Sólido, Líquido
                    std::cout << "Escolha uma opção:" << std::endl;
                    std::cout << "1 - Sólido" << std::endl;
                    std::cout << "2 - Líquido" << std::endl;
                    std::cout << "3 - Voltar" << std::endl;
                    std::cin >> opcao;

                    //Nesse caso cada resíduo cadastrado deve compor uma lista de resíduos que será também sujerida ao cadastrar usuários
                    switch (opcao) {
                        case 1:
                            //Cadastro de resíduo sólido
                            break;
                        case 2:
                            //Cadastro de resíduo líquido
                            break;
                        case 3:
                            //Voltar
                            std::cout << "Voltar" << std::endl;
                            break;
                        default:
                            std::cout << "Opção inválida" << std::endl;
                    }
                    break;
                case 3:
                    //Cadastro de ponto de coleta
                    //Menu de cadastro de ponto de coleta, Endereço, Horário de funcionamento, Telefone, Email, Site, Facebook, Twitter, Instagram, etc
                    //std::cout << "Preencha o formulário:" << std::endl;
                    //std::cout << "Endereço: ";
                    //std::cin >> endereco;
                    //std::cout << "Horário de funcionamento: ";
                    //std::cin >> horario;
                    //std::cout << "Telefone: ";
                    //std::cin >> telefone;
                    //std::cout << "Email: ";
                    //std::cin >> email;
                    //std::cout << "Site: ";
                    //std::cin >> site;
                    //std::cout << "Facebook: ";
                    //std::cin >> facebook;
                    //std::cout << "Twitter: ";
                    //std::cin >> twitter;
                    //std::cout << "Instagram: ";
                    //std::cin >> instagram;
                    break;
                case 4:
                    //Cadastro de agendamento
                    //Menu de cadastro de agendamento, Doador, Receptor, Recolhedor, Data, Horário, Endereço, Tipo de resíduo, Quantidade, Observações
                    //std::cout << "Preencha o formulário:" << std::endl;
                    //std::cout << "Doador: ";
                    //std::cin >> doador;
                    //std::cout << "Receptor: ";
                    //std::cin >> receptor;
                    //std::cout << "Recolhedor: ";
                    //std::cin >> recolhedor;
                    //std::cout << "Data: ";
                    //std::cin >> data;
                    //std::cout << "Horário: ";
                    //std::cin >> horario;
                    //std::cout << "Endereço: ";
                    //std::cin >> endereco;
                    //std::cout << "Tipo de resíduo: ";
                    //std::cin >> tipoResiduo;
                    //std::cout << "Quantidade: ";
                    //std::cin >> quantidade;
                    //std::cout << "Observações: ";
                    //std::cin >> observacoes;
                    break;
                case 5:
                    //Voltar
                    std::cout << "Voltar" << std::endl;
                    break;
                default:
                    std::cout << "Opção inválida" << std::endl;
            }
            break;
        case 2:
            std::cout << "Consulta" << std::endl;
            break;
        case 3:
            std::cout << "Atualizar" << std::endl;
            break;
        case 4:
            std::cout << "Excluir" << std::endl;
            break;
        case 5:
            std::cout << "Sair" << std::endl;
            break;
        default:
            std::cout << "Opção inválida" << std::endl;
            break;
    }    
}