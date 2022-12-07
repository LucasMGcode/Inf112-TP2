//Aluno: Lucas de Oliveira Mota
#ifndef RECEPTOR_H
#define RECEPTOR_H

#include "usuario.h"

class Receptor : public Usuario {
    public:
        //Construtor
        Receptor(std::string cadastroNacional, 
                 std::string nome, 
                 std::string endereco, 
                 std::string telefone, 
                 std::string email);

        //Destrutor
        ~Receptor();

        //static const enum usuario {DOADOR, RECEPTOR, RECOLHEDOR} tipoUsuario = RECEPTOR;
};

#endif //RECEPTOR_H