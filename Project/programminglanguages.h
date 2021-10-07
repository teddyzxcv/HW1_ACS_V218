#ifndef PROJECT_PROGRAMMINGLANGUAGES_H
#define PROJECT_PROGRAMMINGLANGUAGES_H

//------------------------------------------------------------------------------
// programminglanguages.h - содержит описание обобщённого языки програмировании,
//------------------------------------------------------------------------------

#include "functional.h"
#include "objectoriented.h"
#include "procedural.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся виды языки программирование.
struct programminglanguages {
    double tiobi;
    int yearofсreation;
    // значения ключей для каждой из языки
    enum key {
        FUNCTIONAL, OBJECTORIENTED, PROCEDURAL
    };
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        objectoriented s;
        functional p;
        procedural t;
    };
};

// Ввод обобщенной язык
programminglanguages *In(std::ifstream &ifdt);

// Случайный ввод обобщенной язык
programminglanguages *InRnd();

// Вывод обобщенной язык
void Out(programminglanguages &s, std::ofstream &ofst);

// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(programminglanguages &t);

#endif //PROJECT_PROGRAMMINGLANGUAGES_H
