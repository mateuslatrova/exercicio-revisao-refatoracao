#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

    private: 
        double quotaMensalVendas;	  
	
    public:
        Vendedor(std::string _nome, double _salario, int _quota);
        double quotaTotalAnual();
        void imprimirAtributos(double horasTrabalhadas) override;
};