#include "Cliente.hpp"
#include <iostream>
#include <string>
namespace Clientes {
void Cliente::print() const {
  cout << "  Nome: " << this->nome << endl
       << "  Telefone: " << this->telefone << endl
       << "  Endereço: " << this->endereco << endl
       << "  Cidade: " << this->cidade << endl
       << "  Estado: " << this->unidadeFederativa << endl
       << "  CEP: " << this->codigoPostal << endl;
}
} // namespace Clientes
