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
* Archivo cadena.h: clase cadena
* Contiene la declaración de métodos y los atributos de la clase cadena
* Referencias:
* Enlaces de interés:
*/

#ifndef STRING_H
#define STRING_H

#include "alphabet.h"

const char kSpace = ' ';

// Clase que almacena una secuencia de símbolos que pretenecen a un alfabeto
class Chain{
 public:
  Chain(void);
  Chain(std::string line);
  Chain(std::string string, Alphabet alphabet);
  Alphabet GetAlphabet(void) const;
  std::vector<Symbol> GetChain(void) const;
  int GetSize(void) const;
  void Invert();
  void Push_back(Symbol symbol);
  friend Chain operator^(const Chain& chain, const int& number);
  friend Chain operator*(const Chain& chain1, const Chain& chain2);
  friend bool operator==(const Chain& chain1, const Chain& chain2);
  friend bool operator<(const Chain& chain1, const Chain& chain2);
  friend bool operator>(const Chain& chain1, const Chain& chain2);
  friend bool operator!=(const Chain& chain1, const Chain& chain2);
  friend std::ostream& operator<<(std::ostream& out, const Chain& string);
  friend std::istream& operator>>(std::istream& in, Chain& stringt);

 private:
  std::vector<Symbol> string_pos_;
  Alphabet alphabet_;
};   

#endif