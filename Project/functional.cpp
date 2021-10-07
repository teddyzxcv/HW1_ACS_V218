//------------------------------------------------------------------------------
// functional.cpp - содержит функции обработки функцианальный язык
//------------------------------------------------------------------------------

#include "functional.h"

#include <math.h>

//------------------------------------------------------------------------------
// Ввод параметров функцианальный язык из потока
void In(functional &s, std::ifstream &ifst) {
    ifst >> s.tiobi >> s.yearofcreation >> s.type >> s.isLazySupport;
}

// Случайный ввод параметров функцианальный язык
void InRnd(functional &s) {
    s.tiobi = Random(100);
    s.yearofcreation = Random(2021);
    s.type = Random(2);
    s.isLazySupport = Random(2) - 1;
}

//------------------------------------------------------------------------------
// Вывод параметров функцианальный язык в поток
void Out(functional &s, std::ofstream &ofst) {
    ofst << "It is a functional language: TIOBI = " << s.tiobi
         << ". Year of creation = " << s.yearofcreation
         << ". Years divide count letters in the name = " << YearsDivideLetters(s)
         << ". Type = " << s.type
         << ". is lazy calculation support" << s.isLazySupport
         << "\n";
}

//------------------------------------------------------------------------------
// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(functional &s) {
    return double(double(s.yearofcreation) / 10);
}
