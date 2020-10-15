#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

    private:
        int projetos;

    public:
        Engenheiro();
        Engenheiro(std::string _nome, double _salario, double _horas, int _projetos);
        void imprimirAtributos() override;
};