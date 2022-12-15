// Aluno: Lucas Mota, Igor Acácio
#ifndef PONTO_DE_COLETA_H
#define PONTO_DE_COLETA_H

#include <iostream>

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

class Coleta
{
private:
    std::string local;

public:
    Coleta(std::string local);
    ~Coleta();
    std::string getLocal();
    void setLocal(std::string local);
};

#endif // PONTO_DE_COLETA_H