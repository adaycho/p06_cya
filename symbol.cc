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
* Archivo symbol.cc: clase símbolo
* Contiene la definición de métodos de la clase símbolo
* Referencias:
* Enlaces de interés:
*/

#include "symbol.h"

// Getter de un único símbolo
std::string Symbol::GetSymbol() const {
  return symbol_;
}

// Setter de un único símbolo
void Symbol::SetSymbol(const std::string new_symbol) {
  symbol_ = new_symbol;
}

// Metodo para devolver el tamaño
int Symbol::Size() const{
  return symbol_.size();
}

// Sobrecarga del operador menor que
bool operator<(const Symbol& string1, const Symbol& string2) {
  return string1.GetSymbol() < string2.GetSymbol();
}

// Sobrecarga del operador mayor que
bool operator>(const Symbol& string1, const Symbol& string2) {
  return string1.GetSymbol() > string2.GetSymbol();
}

// Sobrecarga del operador de igualdad
bool operator==(const Symbol& string1, const Symbol& string2) {
  return string1.GetSymbol() == string2.GetSymbol();
}

// Sobrecarga del operador de desigualdad
bool operator!=(const Symbol& string1, const Symbol& string2) {
  return string1.GetSymbol() != string2.GetSymbol();
}

// Sobrecarga del operador de salida
std::ostream& operator<<(std::ostream& out, const Symbol& symbol) {
  out << symbol.GetSymbol();
  return out;
}

// Sobrecarga del operador de entrada
std::istream& operator>>(std::istream& in, const Symbol& symbol) {
  in >> symbol.symbol_;
  return in;
}