//------------------------------------------------------------------------------
// programminglanguages.cpp - содержит процедуры связанные с обработкой обобщенной
// языки программирование и создания произвольной языки программировании.
//------------------------------------------------------------------------------

#include "programminglanguages.h"

//------------------------------------------------------------------------------
// Ввод параметров обобщенной языки из файла
programminglanguages* In(std::ifstream &ifst) {
    programminglanguages *language;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            language = new programminglanguages;
            language->k = programminglanguages::PROCEDURAL;
            In(language->s, ifst);
            return language;
        case 2:
            language = new programminglanguages;
            language->k = programminglanguages::OBJECTORIENTED;
            In(language->p, ifst);
            return language;
        case 3:
            language = new programminglanguages;
            language->k = programminglanguages::FUNCTIONAL;
            In(language->t, ifst);
            return language;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Случайный ввод обобщенной фигуры
programminglanguages *InRnd() {
    programminglanguages *language;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            language = new programminglanguages;
            language->k = programminglanguages::PROCEDURAL;
            InRnd(language->s);
            return language;
        case 2:
            language = new programminglanguages;
            language->k = programminglanguages::OBJECTORIENTED;
            InRnd(language->p);
            return language;
        case 3:
            language = new programminglanguages;
            language->k = programminglanguages::FUNCTIONAL;
            InRnd(language->t);
            return language;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(programminglanguages &s, std::ofstream &ofst) {
    switch(s.k) {
        case programminglanguages::PROCEDURAL:
            Out(s.s, ofst);
            break;
        case programminglanguages::OBJECTORIENTED:
            Out(s.p, ofst);
            break;
        case programminglanguages::FUNCTIONAL:
            Out(s.t, ofst);
            break;
        default:
            ofst << "Incorrect language!" << std::endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(programminglanguages &t) {
    switch(t.k) {
        case programminglanguages::PROCEDURAL:
            return YearsDivideLetters(t.s);
        case programminglanguages::OBJECTORIENTED:
            return YearsDivideLetters(t.p);
        case programminglanguages::FUNCTIONAL:
            return YearsDivideLetters(t.t);
        default:
            return 0.0;
    }
}
