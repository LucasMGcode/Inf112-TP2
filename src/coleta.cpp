// Aluno: Lucas de Oliveira Mota
//        Igor Cristian Acácio Josafá

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "coleta.h"

Coleta::Coleta(std::string local)
{
    this->local = local;
}

Coleta::~Coleta()
{
}

std::string Coleta::getLocal()
{
    return local;
}

void Coleta::setLocal(std::string local)
{
    this->local = local;
}