#ifndef PROJECT_FUNCTIONAL_H
#define PROJECT_FUNCTIONAL_H

//------------------------------------------------------------------------------
// functional.h - содержит описание функцианальный язык
//------------------------------------------------------------------------------

#include <fstream>
#include "rnd.h"


//------------------------------------------------------------------------------
// функцианальный язык
struct functional {
    double tiobi;
    int yearofсreation;
    enum Types {
        DYNAMIC,
        STATIC
    };
    bool isLazySupport;
};

// Ввод параметров функцианальный язык из файла
void In(functional &s, std::ifstream &ifst);

// Случайный ввод параметров функцианальный язык
void InRnd(functional &s);

// Вывод параметров функцианальный язык в форматируемый поток
void Out(functional &s, std::ofstream &ofst);

// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(functional &t);

#endif //PROJECT_FUNCTIONAL_H
