//Aluno: Lucas de Oliveira Mota
#ifndef LIQUIDO_H
#define LIQUIDO_H

#include "residuo.h"

class Liquido : public Residuo {
    public:
        //Construtor
        Liquido(std::string nome, std::string descricao, std::string tipo, std::string dicaRecolhimento);

        //Destrutor
        ~Liquido();
};

#endif //LIQUIDO_H