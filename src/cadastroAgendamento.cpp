//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  

#include <iostream> 
#include <fstream>
#include <string>
#include <cstring>
#include "cadastroResiduo.h"
#include "cadastroUsuario.h"
#include "cadastroAgendamento.h"



void CadastroAgendamento::novoCadastroAgendamento(int opcao){
   
   //Dados usados no agendamento
    std::string data, local;
    std::ofstream arquivoagendamento;
    std::vector<Agendamento> vecagendamentos;
    std::string cadastroNacional1;
    std::string cadastroNacional2;
    std::string nomeResiduo;


    std::cout << "Local: ";
    std::cin.ignore();
    std::getline(std::cin, local);

    std::cout << "Data: ";
    std::getline(std::cin, data);

    std::cout << "Cadastro de usuario Receptor: ";
    std::getline(std::cin, cadastroNacional1);
    
    std::cout << "Cadastro de usuario Recolhedor: ";
    std::getline(std::cin, cadastroNacional2);

    std::cout << "Nome do Residuo: ";
    std::getline(std::cin, nomeResiduo);


    
     
  Agendamento agendamento(data, local);
        vecagendamentos.push_back(agendamento);

    arquivoagendamento.open("agendamento.txt", std::ios::app);
    for(int i = 0; i < vecagendamentos.size(); i++) {
        arquivoagendamento << local             << "&";
        arquivoagendamento << data              << "&";
        arquivoagendamento << cadastroNacional1 << "&";
        arquivoagendamento << cadastroNacional2 << "&";
        arquivoagendamento << nomeResiduo       << "&";
        arquivoagendamento << std::endl;
    }

    arquivoagendamento.close();

    system("clear||cls");
    std::cout << "Cadastro realizado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}
//Função para atualizar algum CadastroAgendamento

void CadastroAgendamento::atualizarCadastroAgendamento(int opcao, std::string cadastroNacional1){
    //Dados usados no agendamento
    std::string data, local;
    std::ofstream arquivoagendamento;
    std::vector<Agendamento> vecagendamentos;
    std::string cadastroNacional2;
    std::string nomeResiduo;

    std::cout << "Local: ";
    std::cin.ignore();
    std::getline(std::cin, local);

    std::cout << "Data: ";
    std::getline(std::cin, data);

    std::cout << "Cadastro de usuario Receptor: ";
    std::getline(std::cin, cadastroNacional1);
    
    std::cout << "Cadastro de usuario Recolhedor: ";
    std::getline(std::cin, cadastroNacional2);

    std::cout << "Nome do Residuo: ";
    std::getline(std::cin, nomeResiduo);

    Agendamento agendamento(data, local);
        vecagendamentos.push_back(agendamento);

    arquivoagendamento.open("agendamento.txt", std::ios::app);
    for(int i = 0; i < vecagendamentos.size(); i++) {
        arquivoagendamento << local             << "&";
        arquivoagendamento << data              << "&";
        arquivoagendamento << cadastroNacional1 << "&";
        arquivoagendamento << cadastroNacional2 << "&";
        arquivoagendamento << nomeResiduo       << "&";
        arquivoagendamento << std::endl;
    }

    arquivoagendamento.close();

    system("clear||cls");
    std::cout << "Cadastro atualizado com sucesso!" << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");
}


void CadastroAgendamento::consultarCadastroAgendamento(int opcao, std::string cadastroNacional1){
    //Consultar cadastros de agendamento 
    std::ifstream arquivoagendamento;
    std::string linha;
    std::string local, data, cadastroNacional2, nomeresiduo;
    std::vector<Agendamento> vecagendamentos;
   
    arquivoagendamento.open("agendamento.txt");

    if(arquivoagendamento.is_open()){
        if(cadastroNacional1 == cadastroNacional1 || cadastroNacional1 == cadastroNacional2){
        while(std::getline(arquivoagendamento, linha)){
            std::stringstream ss(linha);
            std::getline(ss, local, '&');
            std::getline(ss, data, '&');
            std::getline(ss, cadastroNacional1, '&');
            std::getline(ss, cadastroNacional2, '&');
            std::getline(ss, nomeresiduo, '&');
            Agendamento agendamento(data, local);
            vecagendamentos.push_back(agendamento);
        }
    
    }
    //Imprime os agendamentos
    for(int i = 0; i < vecagendamentos.size(); i++){
        std::cout << "Local: " << vecagendamentos[i].getLocal() << std::endl;
        std::cout << "Data: " << vecagendamentos[i].getData() << std::endl;
        std::cout << "Cadastro de usuario Receptor: " << cadastroNacional1 << std::endl;
        std::cout << "Cadastro de usuario Recolhedor: " << cadastroNacional2 << std::endl;
        std::cout << "Nome do Residuo: " << nomeresiduo << std::endl;
        std::cout << std::endl;
    }
    }
    else {
        std::cout << "Cadastro não encontrado!" << std::endl;
    }

    arquivoagendamento.close();
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");



}
void CadastroAgendamento::deletarCadastroAgendamento(int opcao1, std::string cadastroNacional1){
    //Deletar um agendamento
    std::ifstream arquivoagendamento;
    std::ofstream arquivoagendamento2;
    std::string linha;
    std::string local, data, cadastroNacional2;
    std::vector<Agendamento> vecagendamentos;
    std::string localDeletar;
    std::string dataDeletar;
    std::string cadastroNacional1Deletar;
    std::string cadastroNacional2Deletar;
    std::string nomeResiduoDeletar;
    int opcao;
    bool achou = false;

    std::cout << "Digite o local do agendamento a ser deletado: ";
    std::cin.ignore();
    std::getline(std::cin, localDeletar);

    std::cout << "Digite a data do agendamento a ser deletado: ";
    std::getline(std::cin, dataDeletar);

    std::cout << "Digite o cadastro de usuario Receptor a ser deletado: ";
    std::getline(std::cin, cadastroNacional1Deletar);

    std::cout << "Digite o cadastro de usuario Recolhedor a ser deletado: ";
    std::getline(std::cin, cadastroNacional2Deletar);

    std::cout << "Digite o nome do Residuo a ser deletado: ";
    std::getline(std::cin, nomeResiduoDeletar);


    arquivoagendamento.open("agendamento.txt");
    arquivoagendamento2.open("agendamento2.txt");

    if(arquivoagendamento.is_open()){
        while(std::getline(arquivoagendamento, linha)){
            std::stringstream ss(linha);
            std::getline(ss, local, '&');
            std::getline(ss, data, '&');
            std::getline(ss, cadastroNacional1, '&');
            std::getline(ss, cadastroNacional2, '&');
            if(local != localDeletar || data != dataDeletar || cadastroNacional1 != cadastroNacional1Deletar || cadastroNacional2 != cadastroNacional2Deletar || nomeResiduoDeletar != nomeResiduoDeletar){
                arquivoagendamento2 << local << "&";
                arquivoagendamento2 << data << "&";
                arquivoagendamento2 << cadastroNacional1 << "&";
                arquivoagendamento2 << cadastroNacional2 << "&";
                arquivoagendamento2 << nomeResiduoDeletar << "&";
                arquivoagendamento2 << std::endl;
            }
            else {
                achou = true;
            }
        }
    }
    else {
        std::cout << "Cadastro não encontrado!" << std::endl;
    }

    arquivoagendamento.close();
    arquivoagendamento2.close();

    remove("agendamento.txt");
    rename("agendamento2.txt", "agendamento.txt");

    if(achou){
        std::cout << "Cadastro deletado com sucesso!" << std::endl;
    }
    else {
        std::cout << "Cadastro não encontrado!" << std::endl;
    }

    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    system("clear||cls");



}


