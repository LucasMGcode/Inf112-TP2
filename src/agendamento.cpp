//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  
#include <fstream>
#include <string>
#include "cadastroResiduo.h"
#include "cadastroUsuario.h"
#include "agendamento.h"

// Construtor
Agendamento::Agendamento(std::string data, std::string local)
{
    this->data = data;
    this->local = local;
}

// Destrutor
Agendamento::~Agendamento() {}

// Getters
std::string Agendamento::getData()
{
    return this->data;
}

std::string Agendamento::getLocal()
{
    return this->local;
}

void Agendamento::agendar()
{
    std::ofstream arquivoAgendamento;
    arquivoAgendamento.open("agendamento.txt", std::ios::app);
    arquivoAgendamento << this->data << ";" << this->local << ";" << std::endl;
    arquivoAgendamento.close();
}

void Agendamento::listarAgendamentos()
{
    std::ifstream arquivoAgendamento;
    arquivoAgendamento.open("agendamento.txt");
    std::string linha;
    while (std::getline(arquivoAgendamento, linha))
    {
        std::cout << linha << std::endl;
    }
    arquivoAgendamento.close();
}

void Agendamento::listarAgendamentos(std::string data)
{
    std::ifstream arquivoAgendamento;
    arquivoAgendamento.open("agendamento.txt");
    std::string linha;
    while (std::getline(arquivoAgendamento, linha))
    {
        if (linha.find(data) != std::string::npos)
        {
            std::cout << linha << std::endl;
        }
    }
    arquivoAgendamento.close();
}

void Agendamento::listarAgendamentos(std::string data, std::string local)
{
    std::ifstream arquivoAgendamento;
    arquivoAgendamento.open("agendamento.txt");
    std::string linha;
    while (std::getline(arquivoAgendamento, linha))
    {
        if (linha.find(data) != std::string::npos && linha.find(local) != std::string::npos)
        {
            std::cout << linha << std::endl;
        }
    }
    arquivoAgendamento.close();
}

void Agendamento::listarAgendamentos(std::string data, std::string local, std::string cadastroNacional)
{
    std::ifstream arquivoAgendamento;
    arquivoAgendamento.open("agendamento.txt");
    std::string linha;
    while (std::getline(arquivoAgendamento, linha))
    {
        if (linha.find(data) != std::string::npos && linha.find(local) != std::string::npos && linha.find(cadastroNacional) != std::string::npos)
        {
            std::cout << linha << std::endl;
        }
    }
    arquivoAgendamento.close();
}