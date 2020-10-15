#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salario, int _projetos) {
    this->nome = _nome;
    this->salarioHora = _salario;
    this->projetos = _projetos;
}

void Engenheiro::imprimirAtributos(double horasTrabalhadas) {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Projetos: " << this->projetos << std::endl;
    std::cout << std::endl;
}

