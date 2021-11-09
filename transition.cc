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
* Archivo transition.cc: clase transición
* Contiene la definición de métodos de la clase transición
* Referencias:
* Enlaces de interés:
*/

#include "transition.h"

// Constructor del arco
Transition::Transition(State start, State end, Symbol symbol) {
  start_ = start;
  end_ = end;
  symbol_ = symbol;
}

// Método que comprueba si el arco es el bsucado
bool Transition::CheckArc(State start, Symbol symbol) {
  bool flag {false};
  if(start == start_ && symbol == symbol_) {
    flag = true;
  }
  return flag;
}

// Método que devuelve el estado final del arco
State Transition::GetEnd() {
  return end_;
}