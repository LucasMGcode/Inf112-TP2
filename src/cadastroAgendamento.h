//Aluno: Lucas de Oliveira Mota
//       Igor Cristian Acácio Josafá  

#include <iostream>
#include <fstream>
#include <string>
#include <cstring> 
#include "cadastroResiduo.h"
#include "cadastroUsuario.h"
#include "agendamento.h"

class CadastroAgendamento : public Agendamento{
public: 
    static void novoCadastroAgendamento(int opcao);
    static void consultarCadastroAgendamento(int opcao, std::string CadastroAgendamento); //Consulta por nome
    static void deletarCadastroAgendamento(int opcao1, std::string CadastroAgendamento);
    static void atualizarCadastroAgendamento(int opcao1, std::string CadastroAgendamento);
};


