//Aluno: Lucas Mota, Igor Acácio
#ifndef CADASTROUSUARIO_H
#define CADASTROUSUARIO_H

#include <vector>
#include <fstream>
#include <sstream>

#include "usuario.h"
#include "doador.h"
#include "receptor.h"
#include "recolhedor.h"

class CadastroUsuario {
    public:
        static void novoCadastroUsuario(int opcao);
        static void consultarCadastroUsuario(int opcao, std::string cadastroNacional);
        static void atualizarCadastroUsuario(int opcao, std::string cadastroNacional);
        static void deletarCadastroUsuario(std::string cadastroNacional);
};

#endif //CADASTROUSUARIO_H