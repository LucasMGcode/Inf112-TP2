//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  


#include <iostream> 
#include <fstream>
#include <string>
#include <cstring>
#include "coleta.h"
#include "cadastroColeta.h"

void CadastroColeta::novoCadastroColeta(int opcao){
    std::string local;

    std::cout << "Digite o local da coleta: ";
    std::cin.ignore();
    std::getline(std::cin, local);

    std::ofstream arquivo;
    arquivo.open("coleta.txt", std::ios::app);
    arquivo << local << std::endl;
    arquivo.close();
}

void CadastroColeta::consultarCadastroColeta(int opcao, std::string CadastroColeta){
    std::string local;
    std::ifstream arquivo;
    arquivo.open("coleta.txt");
    while(!arquivo.eof()){
        arquivo >> local;
        if(local == CadastroColeta){
            std::cout << "Local: " << local << std::endl;
        }
    }
    arquivo.close();
}

//Função para atualizar algum CadastroColeta

void CadastroColeta::atualizarCadastroColeta(int opcao, std::string CadastroColeta){
    std::string local;
    std::string local1;
    std::ifstream arquivo;
    std::ofstream arquivo1;
    arquivo.open("coleta.txt");
    arquivo1.open("coleta1.txt");
    while(!arquivo.eof()){
        arquivo >> local;
        if(local == CadastroColeta){
            std::cout << "Digite o novo local da coleta: ";
            std::cin.ignore();
            std::getline(std::cin, local);
            arquivo1 << local1 << std::endl;
        }else{
            arquivo1 << local << std::endl;
        }
    }
    arquivo.close();
    arquivo1.close();
    remove("coleta.txt");
    rename("coleta1.txt", "coleta.txt");
}











void CadastroColeta::deletarCadastroColeta(int opcao1, std::string local){
    std::string local1;
    std::ifstream arquivo;
    std::ofstream arquivo1;
    arquivo.open("coleta.txt");
    arquivo1.open("coleta1.txt");
    while(!arquivo.eof()){
        arquivo >> local;
        if(local != local1){
            arquivo1 << local << std::endl;
        }
    }
    arquivo.close();
    arquivo1.close();
    remove("coleta.txt");
    rename("coleta1.txt", "coleta.txt");
}

