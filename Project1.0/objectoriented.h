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
    int yearofcreation;
    enum Inheritance {
        SINGLE = 1,
        MULTIPLE,
        INTERFACE
    } inheritance;

};

// Ввод параметров объектно-ориентированный язык из файла
void In(objectoriented &l, std::ifstream &ifst);

// Случайный ввод параметров объектно-ориентированный язык
void InRnd(objectoriented &l);

// Вывод параметров объектно-ориентированный язык в форматируемый поток
void Out(objectoriented &l, std::ofstream &ofst);

// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(objectoriented &l);

#endif //PROJECT_OBJECTORIENTED_H
