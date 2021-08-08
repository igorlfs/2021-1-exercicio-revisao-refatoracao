#include <iomanip>
#include <iostream>

#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"
#include "Imovel.hpp"

int main() {

  Cliente cliente1;
  cliente1.nome = "Xayso Sovon Ziahaka";
  cliente1.endereco = "Rua Xangrilá - Braúnas";
  cliente1.cidade = "Belo Horizonte";
  cliente1.unidadeFederativa = "MG";
  cliente1.codigoPostal = "31365-570";
  cliente1.telefone = "3196007958";

  Cliente cliente2;
  cliente2.nome = "Minia Pasies Kituos";
  cliente2.endereco = "Rua dos Jacobinos - Ouro Minas";
  cliente2.cidade = "Belo Horizonte";
  cliente2.unidadeFederativa = "MG";
  cliente2.codigoPostal = "31870-290";
  cliente2.telefone = "3197627067";

  Cliente cliente3;
  cliente3.nome = "Vuocue Leiur Baonauza";
  cliente3.endereco = "Rua Orminda de Almeida - Tupi B";
  cliente3.cidade = "Belo Horizonte";
  cliente3.unidadeFederativa = "MG";
  cliente3.codigoPostal = "31842-630";
  cliente3.telefone = "3195949327";

  Cliente cliente4;
  cliente4.nome = "Zerer Huduy Fyogar";
  cliente4.endereco = "Rua Taquaril - Jonas Veiga";
  cliente4.cidade = "Belo Horizonte";
  cliente4.unidadeFederativa = "MG";
  cliente4.codigoPostal = "30285-422";
  cliente4.telefone = "3198596327";

  Cliente cliente5;
  cliente5.nome = "Ceziel Mioti Pler";
  cliente5.endereco = "Rua João Gualberto Costa - Serrano";
  cliente5.cidade = "Belo Horizonte";
  cliente5.unidadeFederativa = "MG";
  cliente5.codigoPostal = "30882-747";
  cliente5.telefone = "3196274465";

  Cliente cliente6;
  cliente6.nome = "Esxo Cilal Zyais";
  cliente6.endereco =
      "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
  cliente6.cidade = "Belo Horizonte";
  cliente6.unidadeFederativa = "MG";
  cliente6.codigoPostal = "31650-560";
  cliente6.telefone = "3195004414";

  Cliente cliente7;
  cliente7.nome = "Leova Wikyecil Neaca";
  cliente7.endereco = "Rua João Arantes - Cidade Nova";
  cliente7.cidade = "Belo Horizonte";
  cliente7.unidadeFederativa = "MG";
  cliente7.codigoPostal = "31170-240";
  cliente7.telefone = "3198461192";

  Cliente cliente8;
  cliente8.nome = "Teas Heimeu Pipe";
  cliente8.endereco =
      "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
  cliente8.cidade = "Belo Horizonte";
  cliente8.unidadeFederativa = "MG";
  cliente8.codigoPostal = "30668-430";
  cliente8.telefone = "3197317802";

  int numApartamentos = 0;
  int numCasas = 0;
  int numCoberturas = 0;

  Apartamento apartamento1;
  apartamento1.corretor = "Tuoruars";
  apartamento1.area = 55.4;
  apartamento1.numQuartos = 2;
  apartamento1.numBanheiros = 1;
  apartamento1.vagas = 0;
  apartamento1.valorPorArea = 987.0;
  apartamento1.valorComissao = apartamento1.comissao();
  apartamento1.valorVenda = apartamento1.valor() + apartamento1.comissao();
  apartamento1.vendedor = cliente1;
  numApartamentos++;

  Apartamento apartamento2;
  apartamento2.corretor = "Fyubyeis";
  apartamento2.area = 74.5;
  apartamento2.numQuartos = 2;
  apartamento2.numBanheiros = 1;
  apartamento2.vagas = 2;
  apartamento2.valorPorArea = 1540.0;
  apartamento2.valorComissao = apartamento2.comissao();
  apartamento2.valorVenda = apartamento2.valor() + apartamento2.comissao();
  apartamento2.vendedor = cliente2;
  numApartamentos++;

  Apartamento apartamento3;
  apartamento3.corretor = "Kelia";
  apartamento3.area = 87.2;
  apartamento3.numQuartos = 3;
  apartamento3.numBanheiros = 2;
  apartamento3.vagas = 2;
  apartamento3.valorPorArea = 2354.0;
  apartamento3.valorComissao = apartamento3.comissao();
  apartamento3.valorVenda = apartamento3.valor() + apartamento3.comissao();
  apartamento3.vendedor = cliente3;
  numApartamentos++;

  // Cobertura
  Cobertura cobertura1;
  cobertura1.corretor = "Koci";
  cobertura1.area = 120.1;
  cobertura1.numQuartos = 3;
  cobertura1.numBanheiros = 3;
  cobertura1.vagas = 2;
  cobertura1.valorPorArea = 3123.5;
  cobertura1.valorComissao = cobertura1.comissao();
  cobertura1.valorVenda = cobertura1.valor() + cobertura1.comissao();
  cobertura1.vendedor = cliente4;
  numCoberturas++;

  Cobertura cobertura2;
  cobertura2.corretor = "Wail";
  cobertura2.area = 134.8;
  cobertura2.numQuartos = 4;
  cobertura2.numBanheiros = 3;
  cobertura2.vagas = 3;
  cobertura2.valorPorArea = 3578.2;
  cobertura2.valorComissao = cobertura2.comissao();
  cobertura2.valorVenda = cobertura2.valor() + cobertura2.comissao();
  cobertura2.vendedor = cliente5;
  numCoberturas++;

  Cobertura cobertura3;
  cobertura3.corretor = "Fival";
  cobertura3.area = 180.0;
  cobertura3.numQuartos = 4;
  cobertura3.numBanheiros = 4;
  cobertura3.vagas = 4;
  cobertura3.valorPorArea = 4165.7;
  cobertura3.valorComissao = cobertura3.comissao();
  cobertura3.valorVenda = cobertura3.valor() + cobertura3.comissao();
  cobertura3.vendedor = cliente6;
  numCoberturas++;

  // Casas
  Casa casa1;
  casa1.corretor = "Beydo";
  casa1.area = 145.6;
  casa1.numQuartos = 3;
  casa1.numBanheiros = 3;
  casa1.vagas = 2;
  casa1.valorPorArea = 4023.6;
  casa1.valorComissao = casa1.comissao();
  casa1.valorVenda = casa1.valor() + casa1.comissao();
  casa1.vendedor = cliente7;
  numCasas++;

  Casa casa2;
  casa2.corretor = "Riuzi";
  casa2.area = 245.0;
  casa2.numQuartos = 5;
  casa2.numBanheiros = 4;
  casa2.vagas = 4;
  casa2.valorPorArea = 4856.2;
  casa2.valorComissao = casa2.comissao();
  casa2.valorVenda = casa2.valor() + casa2.comissao();
  casa2.vendedor = cliente8;
  numCasas++;

  std::cout << "\n>> Relatório de Imóveis <<" << endl;

  double valorApartamentos = 0.0;
  double valorCoberturas = 0.0;
  double valorCasas = 0.0;
  double comissaoApartamentos = 0.0;
  double comissaoCoberturas = 0.0;
  double comissaoCasas = 0.0;

  apartamento1.print();
  valorApartamentos += apartamento1.valor();
  comissaoApartamentos += apartamento1.comissao();
  std::cout << endl;

  apartamento2.print();
  valorApartamentos += apartamento2.valor();
  comissaoApartamentos += apartamento2.comissao();
  std::cout << endl;

  apartamento3.print();
  valorApartamentos += apartamento3.valor();
  comissaoApartamentos += apartamento3.comissao();
  std::cout << endl;

  cobertura1.print();
  valorCoberturas += cobertura1.valor();
  comissaoCoberturas += cobertura1.comissao();
  std::cout << endl;

  cobertura2.print();
  valorCoberturas += cobertura2.valor();
  comissaoCoberturas += cobertura2.comissao();
  std::cout << endl;

  cobertura3.print();
  valorCoberturas += cobertura3.valor();
  comissaoCoberturas += cobertura3.comissao();
  std::cout << endl;

  casa1.print();
  valorCasas += casa1.valor();
  comissaoCasas += casa1.comissao();
  std::cout << endl;

  casa2.print();
  valorCasas += casa2.valor();
  comissaoCasas += casa2.comissao();
  std::cout << endl;

  std::cout << "\n>> Resumo Geral <<" << endl;

  std::cout << "\n>>Apartamentos<<\n"
            << "\n Quantidade: " << numApartamentos << "\n Valor Total: R$ "
            << fixed << setprecision(2) << valorApartamentos
            << "\n Comissão Total: R$" << comissaoApartamentos << endl
            << "\n>>Coberturas<<\n"
            << "\n Quantidade: " << numCoberturas << "\n Valor Total: R$ "
            << fixed << setprecision(2) << valorCoberturas
            << "\n Comissão Total: R$ " << fixed << setprecision(2)
            << comissaoCoberturas << endl
            << "\n>>Casas<<\n"
            << "\n Quantidade: " << numCasas << "\n Valor Total: R$ " << fixed
            << setprecision(2) << valorCasas << "\n Comissão Total: R$ "
            << fixed << setprecision(2) << comissaoCasas << endl;
}