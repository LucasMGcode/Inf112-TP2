// Aluno: Lucas Mota, Igor Acácio
#ifndef RECEPTOR_H
#define RECEPTOR_H

#include "usuario.h"

class Receptor : public Usuario
{
public:
    // Construtor
    Receptor(std::string cadastroNacional,
             std::string nome,
             std::string endereco,
             std::string telefone,
             std::string email);

    // Destrutor
    ~Receptor();
};

#endif // RECEPTOR_H