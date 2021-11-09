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
* Archivo dfa.cc: clase dfa
* Contiene la definición de métodos de la clase dfa
* Referencias:
* Enlaces de interés:
*/

#include "dfa.h"

// Constructor a partir de un fichero
Dfa::Dfa(const std::string file) {
  std::ifstream infile(file);
  std::string target;
  getline(infile, target);
  for (int i = 0; i < std::stoi(target); ++i) {
    states_.push_back(i);
  }
  getline(infile, target);
  start_ = std::stoi(target); 
  while (getline(infile, target)) {
    int found;
    State state, start, finish;
    found = target.find_first_of(kSpace);
    start = std::stoi(target.substr(0, found));
    target = target.substr(found +1);
    found = target.find_first_of(kSpace);
    std::string symbol = target.substr(0, found);
    target = target.substr(found +1);
    if (symbol == "1") {
      finish_.push_back(start);
    }
    found = target.find_first_of(kSpace);
    symbol = target.substr(0, found);
    target = target.substr(found +1);
    state = std::stoi(symbol);
    for (int i = 0; i < state; ++i) {
      found = target.find_first_of(kSpace);
      symbol = target.substr(0, found);
      target = target.substr(found +1);
      alphabet_.Insert(symbol);
      found = target.find_first_of(kSpace);
      finish = std::stoi(target.substr(0, found));
      target = target.substr(found +1);
      Transition transition (start, finish, symbol);
      func_.push_back(transition);
    }
  }
  infile.close();
}

// Función que analiza la cadena con el recorrido del DFA, devolviendo si es aceptada o no
bool Dfa::Analyze (Chain chain) {
  Symbol symbol;
  State state {0};
  if(chain == kEmptyChain){
    for (int i = 0; i < finish_.size(); ++i) {
      if (finish_[i] == state) {
        return true;
      }
    }
    return false;
  }
  for (int i = 0; i < chain.GetSize(); ++i) {
    symbol = chain.GetChain()[i];
    bool flag {false};
    for (int j = 0; j < func_.size(); ++j) {
      if (func_[j].CheckArc(state, symbol)) {
        state = func_[j].GetEnd();
        flag = true;
        break;
      }
    }
    if (flag == false) {
      return false;
    }
  }
  for (int i = 0; i < finish_.size(); ++i) {
    if (finish_[i] == state) {
      return true;
    }
  }
  return false;
}