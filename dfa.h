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
* Archivo dfa.h: clase dfa
* Contiene la declaración de métodos y los atributos de la clase dfa
* Referencias:
* Enlaces de interés:
*/

#ifndef DFA_H
#define DFA_H

#include "transition.h"
#include <string>

// Clase que almacena un Autómata Finito Determinista
class Dfa {
 public:
  Dfa() : alphabet_(), states_(), start_(0), finish_(), func_() {};
  Dfa(const std::string file);
  bool Analyze (Chain chain);
 private:
  Alphabet alphabet_;
  std::vector<State> states_;
  State start_;
  std::vector<State> finish_;
  std::vector<Transition> func_;
};

#endif