// Aluno: Lucas Mota, Igor Acácio
#ifndef CADASTROPONTODECOLETA_H
#define CADASTROPONTODECOLETA_H

#include <vector>
#include <fstream>
#include <sstream>

#include "pontoDeColeta.h"

class CadastroPontoDeColeta
{
public:
    static void novoCadastroPontoDeColeta();
    static void consultarCadastroPontoDeColeta(std::string cep); // Consulta por cep
    static void atualizarCadastroPontoDeColeta(int opcao, std::string nome);
    static void deletarCadastroPontoDeColeta(std::string nome);
};

#endif // CADASTROPONTODECOLETA_H