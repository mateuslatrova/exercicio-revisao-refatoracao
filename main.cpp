#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <vector>

int main() {

    std::vector<Engenheiro> engenheiros;
    engenheiros.push_back(Engenheiro("Joao Snow", 35, 9.5, 3)); 
    engenheiros.push_back(Engenheiro("Daniela Targaryen", 30, 8, 1)); 
    engenheiros.push_back(Engenheiro("Bruno Stark", 30, 8, 2)); 

    std::vector<Vendedor> vendedores;
    vendedores.push_back(Vendedor("Tonho Lannister", 20, 6, 5000)); 
    vendedores.push_back(Vendedor("Jose Mormont", 25, 8, 3000)); 
    vendedores.push_back(Vendedor("Sonia Stark", 30, 8, 4000));    

    for (auto engenheiro: engenheiros) engenheiro.imprimirAtributos();
    for (auto vendedor: vendedores) vendedor.imprimirAtributos();

    return 0;	
}