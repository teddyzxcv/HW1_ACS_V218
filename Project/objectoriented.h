#ifndef PROJECT_OBJECTORIENTED_H
#define PROJECT_OBJECTORIENTED_H

//------------------------------------------------------------------------------
// objectoriented.h - содержит описание объектно-ориентированный язык
//------------------------------------------------------------------------------

#include <fstream>
#include "rnd.h"

//------------------------------------------------------------------------------
// объектно-ориентированный язык
struct objectoriented {
    double tiobi;
    int yearofсreation;
    enum Inheritance {
        SINGLE,
        MULTIPLE,
        INTERFACE
    };

};

// Ввод параметров объектно-ориентированный язык из файла
void In(objectoriented &s, std::ifstream &ifst);

// Случайный ввод параметров объектно-ориентированный язык
void InRnd(objectoriented &s);

// Вывод параметров объектно-ориентированный язык в форматируемый поток
void Out(objectoriented &s, std::ofstream &ofst);

// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(objectoriented &t);

#endif //PROJECT_OBJECTORIENTED_H
