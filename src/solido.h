//Aluno: Lucas de Oliveira Mota
#ifndef SOLIDO_H
#define SOLIDO_H

#include "residuo.h"

class Solido : public Residuo {
    public:
        //Construtor
        Solido(std::string nome, std::string descricao, std::string tipo, std::string dicaRecolhimento);

        //Destrutor
        ~Solido();
};

#endif //SOLIDO_H