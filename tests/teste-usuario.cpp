#include "catch.hpp"
#include "../src/Usuario.hpp"

TEST_CASE("Usuário deve saber informar seu primeiro nome") {
    Usuario vinicius("Vinicius Dias");

    std::string primeiroNome = vinicius.recuperaPrimeiroNome();

    REQUIRE("Vinicius" == primeiroNome);
}
