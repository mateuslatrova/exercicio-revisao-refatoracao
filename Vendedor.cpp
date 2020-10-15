#include "Vendedor.hpp"

Vendedor::Vendedor() :
    Empregado::Empregado("", 0, 0), quotaMensalVendas(0) {};

Vendedor::Vendedor(std::string _nome, double _salario, double _horas, int _quota) :
    Empregado::Empregado(_nome,_salario,_horas), quotaMensalVendas(_quota) {};

double Vendedor::quotaTotalAnual() {
    return this->quotaMensalVendas * 12;
}

void Vendedor::imprimirAtributos() {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
    std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
    std::cout << std::endl;
}
