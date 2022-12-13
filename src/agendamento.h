#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H


#include <iostream> 
#include <fstream>
#include <string>
#include "cadastroResiduo.h"
#include "cadastroUsuario.h"

class Agendamento{

private: 
    std::string data;
    std::string local;

public:
    Agendamento(std::string data, std::string local);
    ~Agendamento();
    std::string getData();
    std::string getLocal();
    void agendar();
    void listarAgendamentos();
    void listarAgendamentos(std::string data);
    void listarAgendamentos(std::string data, std::string local);
    void listarAgendamentos(std::string data, std::string local, std::string cadastroNacional);

};
#endif 