#ifndef PROJECT_PROCEDURAL_H
#define PROJECT_PROCEDURAL_H
//------------------------------------------------------------------------------
// procedural.h - содержит описание процедурный язык
//------------------------------------------------------------------------------

#include <fstream>
#include "rnd.h"

//------------------------------------------------------------------------------
// процедурный язык
struct procedural {
    double tiobi;
    int yearofсreation;
    bool isAbstractTypeExist;
};

// Ввод параметров процедурный язык из файла
void In(procedural &s, std::ifstream &ifst);

// Случайный ввод параметров процедурный язык
void InRnd(procedural &s);

// Вывод параметров процедурный язык в форматируемый поток
void Out(procedural &s, std::ofstream &ofst);

// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(procedural &t);

#endif //PROJECT_PROCEDURAL_H
