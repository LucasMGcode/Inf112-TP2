//Aluno: Lucas Mota, Igor Acácio
#ifndef SOLIDO_H
#define SOLIDO_H

#include "residuo.h"

class Solido : public Residuo {
    private:
        double peso; //Peso em gramas
    public:
        //Construtor
        Solido(int tipo, std::string nome, std::string descricao, std::string dicaRecolhimento, double peso);

        //Destrutor
        ~Solido();

        //Getters e Setters
        double getPeso();
        void setPeso(double peso);
};

#endif //SOLIDO_H