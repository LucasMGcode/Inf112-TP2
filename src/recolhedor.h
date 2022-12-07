//Aluno: Lucas de Oliveira Mota
#ifndef RECOLHEDORES_H
#define RECOLHEDORES_H

#include "usuario.h"

class Recolhedor : public Usuario {
    public:
        //Construtor
        Recolhedor(std::string cadastroNacional, 
                    std::string nome, 
                    std::string endereco, 
                    std::string telefone, 
                    std::string email);

        //Destrutor
        ~Recolhedor();
};

#endif //RECOLHEDORES_H