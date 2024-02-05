#include <iostream>
#include <string>

void* operator new(size_t bytes)
{
    printf("Alocando %d bytes\n", bytes);
    return malloc(bytes);
}

int main() {
    std::cout << "====================================" << std::endl;
    std::string casal = "Carlos Vinicius dos Santos Dias & Patricia Freitas Graça";

    std::string_view meuNome(casal.c_str(), casal.find('&') - 1);
    std::string_view nomeEsposa(casal.c_str() + casal.find('&') + 2);

    std::cout << meuNome << std::endl;
    std::cout << nomeEsposa << std::endl;
    return 0;
}