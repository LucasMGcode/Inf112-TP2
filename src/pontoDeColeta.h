// Aluno: Lucas Mota, Igor Acácio
#ifndef PONTO_DE_COLETA_H
#define PONTO_DE_COLETA_H

#include <iostream>

class PontoDeColeta
{
private:
    std::string cep;
    std::string nome;
    std::string endereco;
    std::string bairro;
    std::string cidade;
    std::string estado;
    // std::string telefone;
    // std::string email;
    // std::string site;
    // std::string tipo;
    // std::string descricao;
    // std::string horarioDeFuncionamento;
    // std::string dataDeCadastro;
    // std::string dataDeAtualizacao;
    // std::string status;
public:
    // Construtor
    PontoDeColeta();
    PontoDeColeta(std::string cep, std::string nome, std::string endereco, std::string bairro, std::string cidade, std::string estado);
    // Destrutor
    ~PontoDeColeta();

    // Getters e Setters
    std::string getCep();
    void setCep(std::string cep);
    std::string getNome();
    void setNome(std::string nome);
    std::string getEndereco();
    void setEndereco(std::string endereco);
    std::string getBairro();
    void setBairro(std::string bairro);
    std::string getCidade();
    void setCidade(std::string cidade);
    std::string getEstado();
    void setEstado(std::string estado);

    void imprimir();
};

#endif // PONTO_DE_COLETA_H