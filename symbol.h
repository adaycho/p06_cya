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
* Archivo symbol.h: clase símbolo
* Contiene la declaración de métodos y los atributos de la clase símbolo
* Referencias:
* Enlaces de interés:
*/

#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <string>

// Clase que permite almacenar los símbolos
class Symbol{
 public:
  Symbol(void): symbol_() {};
  Symbol(std::string symbol) : symbol_(symbol) {};
  std::string GetSymbol() const;
  void SetSymbol(const std::string new_symbol);
  int Size() const;
  friend bool operator<(const Symbol& string1, const Symbol& string2);
  friend bool operator>(const Symbol& string1, const Symbol& string2);
  friend bool operator==(const Symbol& string1, const Symbol& string2);
  friend bool operator!=(const Symbol& string1, const Symbol& string2);
  friend std::ostream& operator<<(std::ostream& out, const Symbol& symbol);
  friend std::istream& operator>>(std::istream& in, const Symbol& symbol);

 private:
  std::string symbol_;
};

#endif