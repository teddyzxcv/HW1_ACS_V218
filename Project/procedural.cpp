//------------------------------------------------------------------------------
// procedural.cpp - содержит функции обработки процедурный язык
//------------------------------------------------------------------------------

#include "procedural.h"

#include <math.h>

//------------------------------------------------------------------------------
// Ввод параметров процедурный язык из потока
void In(procedural &s, std::ifstream &ifst) {
    ifst >> s.tiobi >> s.yearofcreation >> s.isAbstractTypeExist;
}

// Случайный ввод параметров процедурный язык
void InRnd(procedural &s) {
    s.tiobi = Random(100);
    s.yearofcreation = Random(2021);
    s.inheritance = Random(3);
}

//------------------------------------------------------------------------------
// Вывод параметров процедурный язык в поток
void Out(procedural &s, std::ofstream &ofst) {
    ofst << "It is a object oriented language: TIOBI = " << s.tiobi
         << ". Year of creation = " << s.yearofcreation
         << ". Years divide count letters in the name = " << YearsDivideLetters(s)
         << ". Is abstract type exist = " << s.isAbstractTypeExist
         << "\n";
}

//------------------------------------------------------------------------------
// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(procedural &s) {
    return double(double(s.yearofcreation) / 14);
}
