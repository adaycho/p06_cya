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
* Archivo transition.h: clase transición
* Contiene la declaración de métodos y los atributos de la clase transición
* Referencias:
* Enlaces de interés:
*/

#ifndef FUNCTION_H
#define TRANSITION_H

#include <vector>
#include "state.h"
#include "language.h"

// Clase transición, que representa un arco entre nodos
class Transition {
 public:
  Transition(State start, State end, Symbol symbol);
  Transition() : start_(-1), end_(-1), symbol_() {};
  bool CheckArc(State start, Symbol symbol);
  State GetEnd();

 private:
  State start_;
  State end_;
  Symbol symbol_;
};
#endif