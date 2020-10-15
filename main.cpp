#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

    Engenheiro eng1("Joao Snow", 35, 3); 
    eng1.imprimirAtributos(9.5);

    Engenheiro eng2("Daniela Targaryen", 30, 1); 
    eng1.imprimirAtributos(8);  
    Engenheiro eng3("Bruno Stark", 30, 2); 
    eng1.imprimirAtributos(8);  

    Vendedor vend1("Tonho Lannister", 20, 5000);
    vend1.imprimirAtributos(6);

    Vendedor vend2("Jose Mormont", 25, 3000);
    vend2.imprimirAtributos(8); 

    Vendedor vend3("Sonia Stark", 30, 4000);
    vend3.imprimirAtributos(8);  

    return 0;	
}