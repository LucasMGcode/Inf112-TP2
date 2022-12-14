//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  

#ifndef COLETA_H
#define COLETA_H

#include <iostream> 
#include <fstream>
#include <string>
#include <cstring>


class Coleta{
    private: 
    std::string local;

    public:
    Coleta(std::string local);
    ~Coleta();
    std::string getLocal();
    void setLocal(std::string local);
};

#endif