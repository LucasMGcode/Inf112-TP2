//Aluno: Lucas de Oliveira Mota
#ifndef LIQUIDO_H
#define LIQUIDO_H

#include "residuo.h"

class Liquido : public Residuo {
    private:
        double volume; //Volume em litros
    public:
        //Construtor
        Liquido(int tipo, std::string nome, std::string descricao, std::string dicaRecolhimento, double volume);

        //Destrutor
        ~Liquido();

        //Getters e Setters
        double getVolume();
        void setVolume(double volume);
};

#endif //LIQUIDO_H