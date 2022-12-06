//Aluno: Lucas de Oliveira Mota
#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>

class Usuario {
    protected:
        std::string cadastroNacional; //CPF ou CNPJ
        std::string nome;
        std::string endereco;
        std::string telefone;
        std::string email;
        
    public:
        //Getters
        std::string getCadastroNacional();
        std::string getNome();
        std::string getEndereco();
        std::string getTelefone();
        std::string getEmail();

        //Método(s)
        void imprimeDados(Usuario &usuario);
};

#endif //USUARIO_H