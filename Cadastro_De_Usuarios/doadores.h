//Aluno: Lucas de Oliveira Mota
#include "usuario.h"

//Usuario doador - coleta seletiva
class Doador : public Usuario {
    private:
        std::string tipoDoador;
        std::string tipoResiduo;
        std::string quantidadeResiduo;
    public:
        //Construtor
        Doador();
        Doador(std::string cadastroNacional, 
               std::string nome, 
               std::string endereco, 
               std::string telefone, 
               std::string email);

        //Destrutor
        ~Doador();

        //Getters e Setters
        std::string getCadastroNacional();
        void setCadastroNacional(std::string cadastroNacional);
        std::string getNome();
        void setNome(std::string nome);
        std::string getEndereco();
        void setEndereco(std::string endereco);
        std::string getTelefone();
        void setTelefone(std::string telefone);
        std::string getEmail();
        void setEmail(std::string email);

        //Método(s)
        void imprimeDados();
};