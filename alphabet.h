/**
* Universidad de La Laguna
* Escuela Superior de Ingenier ́ıa y Tecnolog ́ıa
* Grado en Ingeniería Informática
* Asignatura: Computabilidad y Algoritmia
* Curso: 2º
* Práctica 6: Simulación de DFAs
* Autor: Aday Chocho Aisa
* Correo: alu0101437538@ull.edu.es
* Fecha: 07/11/2021
* Archivo alphabet.h: clase alfabeto
* Contiene la declaración de métodos y los atributos de la clase alfabeto
* Referencias:
* Enlaces de interés:
*/

#ifndef ALPHABET_H
#define ALPHABET_H

#include "symbol.h"
#include <cassert>
#include <set>
#include <vector>

// Clase que permite almacenar los símbolos usados en una cadena mediante un set
class Alphabet{
 public:
  Alphabet(void);
  Alphabet(std::vector<Symbol> symbols);
  std::set<Symbol> GetSymbols() const;
  void SetSymbols(const std::set<Symbol> new_symbols);
  void SetSymbol(const Symbol new_symbol);
  void Insert(const Symbol new_symbol);
  int GetSize(void) const;
  bool Check(const std::string chain);
  friend std::ostream& operator<<(std::ostream& out,
  const Alphabet& alphabet);
  friend std::istream& operator>>(std::istream& in, Alphabet& alphabet);

 private:
  std::set<Symbol> symbols_;
};

#endif