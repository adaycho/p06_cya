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
* Archivo alphabet.cc: clase alfabeto
* Contiene la definición de métodos de la clase alfabeto
* Referencias:
* Enlaces de interés:
*/

#include "alphabet.h"

// Constructor determinado
Alphabet::Alphabet() : symbols_() {}

// Constructor a partir de un vector de símbolos
Alphabet::Alphabet(std::vector<Symbol> symbols) {
  for(int i = 0; i < symbols.size(); ++i) {
    symbols_.insert(symbols[i]);
  }
};

// Getter del alfabeto completo
std::set<Symbol> Alphabet::GetSymbols() const {
  return symbols_;
}

// Setter del alfabeto completo
void Alphabet::SetSymbols(const std::set<Symbol> new_symbols) {
  symbols_ = new_symbols;
}

// Método que insrta un simbolo al alfabeto
void Alphabet::Insert(const Symbol new_symbol) {
   symbols_.insert(new_symbol);
}

// Método que devuelve el nº de símbolos del alfabeto
int Alphabet::GetSize() const{
  return symbols_.size();
}

//Método que comprueba si una cadena pasada por texto pertenece a un alfabeto
bool Alphabet::Check(const std::string chain){
  for (int i = 0; i < chain.size(); ++i) {
    bool flag = false;
    for (auto& symbol:GetSymbols()) {
      std::string symbol_ch = chain.substr(i, symbol.Size());
      if (symbol.GetSymbol() == symbol_ch) {
        i += symbol.Size() - 1;
        flag = true;
        break;
      }
    }
    if (flag == false) {
      return false;
    }
  }
  return true;
}

// Sobrecarga de salida
std::ostream& operator<<(std::ostream& out, const Alphabet& alphabet) {
  out << "{";
  bool flag = false;
  for (auto& i : alphabet.symbols_){
    if (flag) {
      out << ", ";
    }
    out << i;
    flag = true;
  }
  out << "}";
  return out;
}

//Sobrecarga de entrada
std::istream& operator>>(std::istream& in, Alphabet& alphabet) {
  int number;
  std::cout << "Nº Símbolos: ";
  in >> number;
  for (int i = 0; i < number; ++i){
    std::string hey;
    in >> hey;
    Symbol symbol(hey);
    alphabet.symbols_.insert(symbol);
  }
  return in;
}