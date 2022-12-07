//Aluno: Lucas de Oliveira Mota
#ifndef CADASTRORESIDUO_H
#define CADASTRORESIDUO_H

#include <vector>
#include <fstream>
#include <sstream>

#include "residuo.h"
#include "solido.h"
#include "liquido.h"

class CadastroResiduo {
    public:
        static void novoCadastroResiduo(int opcao);
        static void consultarCadastroResiduo(int opcao, std::string nome); //Consulta por nome
        static void consultarCadastroResiduo(int opcao); //Mostra todos os cadastros de residuos
        static void atualizarCadastroResiduo();
        static void deletarCadastroResiduo();
};

#endif //CADASTRORESIDUO_H