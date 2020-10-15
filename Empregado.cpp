#include "Empregado.hpp"

Empregado::Empregado(std::string _nome, double _salario) {
    this->nome = _nome;
    this->salarioHora = _salario;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double horasComBonus = horasTrabalhadas;
    //Cálculo de hora extra (+50% se horasTrabalhadas > HORAS_PADRAO(8 horas))
    if (horasTrabalhadas > HORAS_PADRAO) {
        double horasExtras = horasTrabalhadas - HORAS_PADRAO;
        horasComBonus += (horasExtras / 2);
    }

    double pagamento = horasComBonus * this->salarioHora;

    return pagamento;
}

