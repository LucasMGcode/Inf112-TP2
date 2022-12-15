// Aluno: Lucas Mota, Igor Acácio
#ifndef DOADOR_H
#define DOADOR_H

#include "usuario.h"

class Doador : public Usuario
{
public:
    // Construtor
    Doador(std::string cadastroNacional,
           std::string nome,
           std::string endereco,
           std::string telefone,
           std::string email);

    // Destrutor
    ~Doador();
};

#endif // DOADOR_H