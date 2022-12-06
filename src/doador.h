//Aluno: Lucas de Oliveira Mota
#ifndef DOADOR_H
#define DOADOR_H

#include <iostream>
#include <string>

#include "usuario.h"

class Doador : public Usuario {
    private:
    public:
        //Construtor
        Doador(std::string cadastroNacional, 
               std::string nome, 
               std::string endereco, 
               std::string telefone, 
               std::string email);

        //Destrutor
        ~Doador();
};

#endif //DOADOR_H