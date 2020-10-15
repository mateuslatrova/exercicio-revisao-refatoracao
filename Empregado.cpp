#include "Empregado.hpp"

Empregado::Empregado() { 
    this->nome = "";
    this->salarioHora = 0;
    this->horasTrabalhadas = 0;
}

Empregado::Empregado(std::string _nome, double _salario, double _horas) {
    this->nome = _nome;
    this->salarioHora = _salario;
    this->horasTrabalhadas = _horas;
}

double Empregado::pagamentoMes() {
    double horasComBonus = this->horasTrabalhadas;
    //Cálculo de hora extra (+50% se horasTrabalhadas > HORAS_PADRAO(8 horas))
    if (this->horasTrabalhadas > HORAS_PADRAO) {
        double horasExtras = this->horasTrabalhadas - HORAS_PADRAO;
        horasComBonus += (horasExtras / 2);
    }

    double pagamento = horasComBonus * this->salarioHora;

    return pagamento;
}

