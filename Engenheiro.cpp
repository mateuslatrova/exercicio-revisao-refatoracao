#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salario, double _horas, int _projetos) {
    this->nome = _nome;
    this->salarioHora = _salario;
    this->horasTrabalhadas = _horas;
    this->projetos = _projetos;
}

void Engenheiro::imprimirAtributos() {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->Empregado::pagamentoMes() << std::endl;
    std::cout << "Projetos: " << this->projetos << std::endl;
    std::cout << std::endl;
}

