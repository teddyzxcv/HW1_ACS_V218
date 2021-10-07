//------------------------------------------------------------------------------
// objectoriented.cpp - содержит функции обработки объектно-ориентированный язык
//------------------------------------------------------------------------------

#include "objectoriented.h"

#include <math.h>

//------------------------------------------------------------------------------
// Ввод параметров объектно-ориентированный язык из потока
void In(objectoriented &s, std::ifstream &ifst) {
    int inheritance;
    ifst >> s.tiobi >> s.yearofcreation >> inheritance;
    s.inheritance = static_cast<objectoriented::Inheritance>(inheritance);
}

// Случайный ввод параметров объектно-ориентированный язык
void InRnd(objectoriented &s) {
    s.tiobi = Random(100);
    s.yearofcreation = Random(2021);
    s.inheritance = static_cast<objectoriented::Inheritance>(Random(3));
}

//------------------------------------------------------------------------------
// Вывод параметров объектно-ориентированный язык в поток
void Out(objectoriented &s, std::ofstream &ofst) {
    ofst << "It is a object oriented language: TIOBI = " << s.tiobi
         << ". Year of creation = " << s.yearofcreation
         << ". Years divide count letters in the name = " << YearsDivideLetters(s)
         << ". Inheritance = ";
    switch (s.inheritance) {
        case 1:
            ofst << "Single";
            break;
        case 2:
            ofst << "Multiple";
            break;
        case 3:
            ofst << "Interface";
            break;
    }
    ofst << ".\n";
}

//------------------------------------------------------------------------------
// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(objectoriented &s) {
    return double(double(s.yearofcreation) / 14);
}
