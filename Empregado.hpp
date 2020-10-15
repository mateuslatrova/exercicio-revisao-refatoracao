#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
#define HORAS_PADRAO 8 // se o número de horas trabalhadas passar de 8, haverá
                       // um bônus de 50% nas horas extras de trabalho.

class Empregado {
	
    protected:
        std::string nome;
        double salarioHora;    

    public:
        Empregado(std::string _nome, double salario);
        double pagamentoMes(double horasTrabalhadas);
        virtual void imprimirAtributos(double horasTrabalhadas) = 0;
};

#endif