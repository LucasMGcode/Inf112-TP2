//Aluno: Lucas de Oliveira Mota
#ifndef RESIDUO_H
#define RESIDUO_H

#include <iostream>
#include <string>

class Residuo {
    protected:
        int tipo;
        std::string nome;
        std::string descricao;
        std::string dicaRecolhimento;

    public:
        //Construtor
        Residuo(int tipo, std::string nome, std::string descricao, std::string dicaRecolhimento);

        //Destrutor
        ~Residuo();
        
        //Getters e Setters
        virtual int getTipo();
        virtual void setTipo(int tipo);
        virtual std::string getNome();
        virtual void setNome(std::string nome);
        virtual std::string getDescricao();
        virtual void setDescricao(std::string descricao);
        virtual std::string getDicaRecolhimento();
        virtual void setDicaRecolhimento(std::string dicaRecolhimento);
};

#endif //RESIDUO_H