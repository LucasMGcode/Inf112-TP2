//Aluno: Lucas de Oliveira Mota
//TO DO: tratamento de exceções
#include <iostream>
#include <cstring>

#include "cadastroResiduo.h"

//Criar um novo cadastro para residuo
void CadastroResiduo::novoCadastroResiduo(int opcao) {
    //Cadastrar residuo liquido e solido utilizando as classes liquido e solido que herdam de residuo e salvar o vector desse cadastro em um arquivo
    std::string nome, descricao, tipo, dicaRecolhimento;
    std::ofstream arquivo;
    std::vector<Residuo> residuos;

    std::cout << "Nome: ";
    std::cin.ignore();
    std::getline(std::cin, nome);

    std::cout << "Descrição: ";
    std::getline(std::cin, descricao);

    std::cout << "Tipo: ";
    std::getline(std::cin, tipo);

    std::cout << "Dica de Recolhimento: ";
    std::getline(std::cin, dicaRecolhimento);

    if (opcao == 1) {
        Liquido solido(nome, descricao, tipo, dicaRecolhimento);
        residuos.push_back(solido);
    } else if (opcao == 2) {
        Solido liquido(nome, descricao, tipo, dicaRecolhimento);
        residuos.push_back(liquido);
    }

    arquivo.open("cadastroResiduo.txt", std::ios::app);
    for (int i = 0; i < residuos.size(); i++) {
        arquivo << residuos[i].getNome()             << "&";
        arquivo << residuos[i].getDescricao()        << "&";
        arquivo << residuos[i].getTipo()             << "&";
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

//Consulta por nome
void CadastroResiduo::consultarCadastroResiduo(int opcao, std::string nome) {

}

//Mostra todos os cadastros de residuos
void CadastroResiduo::consultarCadastroResiduo(int opcao) {

}

void CadastroResiduo::atualizarCadastroResiduo(int opcao, std::string nome) {
}


void CadastroResiduo::deletarCadastroResiduo() {
}