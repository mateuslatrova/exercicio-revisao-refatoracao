#include "Empregado.hpp"

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

