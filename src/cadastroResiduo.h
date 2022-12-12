//Aluno: Lucas Mota, Igor Acácio
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
        static void atualizarCadastroResiduo(int opcao, std::string nome);
        static void deletarCadastroResiduo(std::string nome);
};

#endif //CADASTRORESIDUO_H