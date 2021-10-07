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
    int yearofcreation;
    enum Types {
        DYNAMIC = 1,
        STATIC = 2
    };
    Types type;
    bool isLazySupport;
};

// Ввод параметров функцианальный язык из файла
void In(functional &l, std::ifstream &ifst);

// Случайный ввод параметров функцианальный язык
void InRnd(functional &l);

// Вывод параметров функцианальный язык в форматируемый поток
void Out(functional &l, std::ofstream &ofst);

// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(functional &l);

#endif //PROJECT_FUNCTIONAL_H
