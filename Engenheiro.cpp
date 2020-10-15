#include "Engenheiro.hpp"

Engenheiro::Engenheiro() : 
    Empregado::Empregado("", 0, 0), projetos(0) {};

Engenheiro::Engenheiro(std::string _nome, double _salario, double _horas, int _projetos) :
    Empregado::Empregado(_nome,_salario,_horas), projetos(_projetos) {};

void Engenheiro::imprimirAtributos() {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
    std::cout << "Projetos: " << this->projetos << std::endl;
    std::cout << std::endl;
}

