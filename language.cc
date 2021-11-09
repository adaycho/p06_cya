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
* Archivo language.cc: clase lenguaje
* Contiene la definición de métodos de la clase lenguaje
* Referencias:
* Enlaces de interés:
*/

#include "language.h"

// Constructor determinado
Alphabet Language::GetAlphabet() const {
  return alphabet_;
}

//Función que devuelve el tamaño
int Language::GetSize() const {
  return language_.size();
}

//Sobrecarga de salida
std::ostream& operator<<(std::ostream& out, const Language& language) {
  out << language.language_[0];
  for (int i = 1; i < language.language_.size(); ++i){
    out << std::endl << language.language_[i];
  }
  return out;
}
//Sobrecarga de entrada
std::istream& operator>>(std::istream& in, Language& language) {
  int number;
  std::cout << "Nº Cadenas: ";
  in >> number;
  for (int i = 0; i < number; ++i){
    std::string hey;
    in >> hey;
    Chain chain(hey);
    language.language_.push_back(chain);
    for (auto& symbol:chain.GetAlphabet().GetSymbols()) {
      bool flag = true;
      for (auto& symbol2:language.alphabet_.GetSymbols()) {
        if (symbol == symbol2) {
          flag = false;
        }
      }
      if (flag == true) {
        language.alphabet_.Insert(symbol);
      }
    }
  }
  return in;
}