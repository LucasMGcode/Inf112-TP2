//Aluno: Lucas de Oliveira Mota
#ifndef CADASTRO_H
#define CADASTRO_H

#include <vector>
#include <fstream>
#include <sstream>

#include "usuario.h"
#include "doador.h"
#include "receptor.h"
#include "recolhedor.h"

class Cadastro {
    public:
        static void novoCadastro(int opcao);
        static void consultarCadastro(std::string cadastroNacional);
        static void atualizarCadastro(int opcao, std::string cadastroNacional);
        static void deletarCadastro(std::string cadastroNacional);
};

#endif //CADASTRO_H