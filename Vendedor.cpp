#include "Vendedor.hpp"

Vendedor::Vendedor(std::string _nome, double _salario, int _quota) {
    this->nome = _nome;
    this->salarioHora = _salario;
    this->quotaMensalVendas = _quota;
}

double Vendedor::quotaTotalAnual() {
    return this->quotaMensalVendas * 12;
}

void Vendedor::imprimirAtributos(double horasTrabalhadas) {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
    std::cout << std::endl;
}
