#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
public:
  string nome;
  string endereco;
  string cidade;
  string unidadeFederativa;
  string codigoPostal;
  string telefone;

  void print();
};

#endif