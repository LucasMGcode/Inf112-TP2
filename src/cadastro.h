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
        static void atualizarCadastro();
        static void deletarCadastro();
};

#endif //CADASTRO_H