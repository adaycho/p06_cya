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
* Archivo state.cc: clase estado
* Contiene la definición de métodos de la clase estado
* Referencias:
* Enlaces de interés:
*/

#include "state.h"

// Función que retorna el valor que marca al estado
int State::GetVal() const {
  return value_;
}

// Sobrecarga del operador menor que
bool operator<(const State& state1, const State& state2) {
  return state1.value_ < state2.value_;
}

// Sobrecarga del operador mayor que
bool operator>(const State& state1, const State& state2) {
  return state1.value_ > state2.value_;
}

// Sobrecarga del operador de igualdad
bool operator==(const State& state1, const State& state2) {
  return state1.value_ == state2.value_;
}

// Sobrecarga del operador de desigualdad
bool operator!=(const State& state1, const State& state2) {
  return state1.value_ != state2.value_;
}

// Sobrecarga del operador de salida
std::ostream& operator<<(std::ostream& out, const State& state) {
  out << state.GetVal();
  return out;
}
