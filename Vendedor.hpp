#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

    private: 
        double quotaMensalVendas;	  
	
    public:
        Vendedor();
        Vendedor(std::string _nome, double _salario, double _horas, int _quota);
        double quotaTotalAnual();
        void imprimirAtributos() override;
};