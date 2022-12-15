//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  

#include <iostream> 
#include <fstream>
#include <string>
#include <cstring>
#include "coleta.h"


class CadastroColeta : public Coleta{
public: 
    static void novoCadastroColeta(int opcao);
    static void consultarCadastroColeta(int opcao, std::string CadastroColeta); 
    static void deletarCadastroColeta(int opcao1, std::string local);
    static void atualizarCadastroColeta(int opcao1, std::string CadastroColeta);
};
