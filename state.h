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
* Archivo state.h: clase estado
* Contiene la declaración de métodos y los atributos de la clase estado
* Referencias:
* Enlaces de interés:
*/

#ifndef STATE_H
#define STATE_H

#include <fstream>

// Clase que define los estados de un DFA
class State {
 public:
  State() : value_(-1) {};
  State(int value) : value_(value) {};
  int GetVal() const;
  friend bool operator==(const State& state1, const State& state2);
  friend bool operator<(const State& state1, const State& state2);
  friend bool operator>(const State& state1, const State& state2);
  friend bool operator!=(const State& state1, const State& state2);
  friend std::ostream& operator<<(std::ostream& out, const State& state);

 private:
  int value_;
};

#endif
