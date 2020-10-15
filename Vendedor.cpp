#include "Vendedor.hpp"

Vendedor::Vendedor(std::string _nome, double _salario, double _horas, int _quota) {
    this->nome = _nome;
    this->salarioHora = _salario;
    this->horasTrabalhadas = _horas;
    this->quotaMensalVendas = _quota;
}

double Vendedor::quotaTotalAnual() {
    return this->quotaMensalVendas * MESES;
}

void Vendedor::imprimirAtributos() {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
    std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
    std::cout << std::endl;
}
