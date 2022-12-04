//Aluno: Lucas de Oliveira Mota
//Interface: Cadastro de Usuários
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
        //Construtor
        Usuario();
        Usuario(std::string cadastroNacional, std::string nome, std::string endereco, std::string telefone, std::string email);

        //Destrutor
        virtual ~Usuario();

        //Getters e Setters
        virtual std::string getCadastroNacional() = 0;
        virtual void setCadastroNacional(std::string cadastroNacional) = 0;
        virtual std::string getNome() = 0;
        virtual void setNome(std::string nome) = 0;
        virtual std::string getEndereco() = 0;
        virtual void setEndereco(std::string endereco) = 0;
        virtual std::string getTelefone() = 0;
        virtual void setTelefone(std::string telefone) = 0;
        virtual std::string getEmail() = 0;
        virtual void setEmail(std::string email) = 0;

        //Método(s)
        virtual void imprimeDados() = 0;
};

#endif //USUARIO_H