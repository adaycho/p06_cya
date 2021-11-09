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
* Archivo laguage.h: clase lenguaje
* Contiene la declaración de métodos y los atributos de la clase lenguaje
* Referencias:
* Enlaces de interés:
*/

#ifndef LANGUAGE_H
#define LANGUAGE_H

#include "chain.h"

const Symbol kEpsilon ("&");
const std::vector<Symbol> kEmptyV {kEpsilon};
const Alphabet kEmptyAlphabet {kEmptyV};
const Chain kEmptyChain {"&", kEmptyAlphabet};

// Clase que almacena un conjunto de cadenas y un alfabeto
class Language{
 public:
  Language(void) : language_(), alphabet_() {};
  Language(std::vector<Chain> chains, Alphabet alphabet) : language_(chains),
  alphabet_(alphabet) {};
  Alphabet GetAlphabet(void) const;
  int GetSize(void) const;
  friend std::ostream& operator<<(std::ostream& out,
  const Language& language);
  friend std::istream& operator>>(std::istream& in, Language& language);

 private:
  std::vector<Chain> language_;
  Alphabet alphabet_;
};

#endif