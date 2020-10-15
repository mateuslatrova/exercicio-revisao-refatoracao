#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

    private:
        int projetos;

    public:
        Engenheiro(std::string _nome, double _salario, int _projetos);
        void imprimirAtributos(double horasTrabalhadas) override;
};