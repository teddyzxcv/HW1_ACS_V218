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
            In(language->p, ifst);
            return language;
        case 2:
            language = new programminglanguages;
            language->k = programminglanguages::OBJECTORIENTED;
            In(language->o, ifst);
            return language;
        case 3:
            language = new programminglanguages;
            language->k = programminglanguages::FUNCTIONAL;
            In(language->f, ifst);
            return language;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Случайный ввод обобщенной языки
programminglanguages *InRnd() {
    programminglanguages *language;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            language = new programminglanguages;
            language->k = programminglanguages::PROCEDURAL;
            InRnd(language->p);
            return language;
        case 2:
            language = new programminglanguages;
            language->k = programminglanguages::OBJECTORIENTED;
            InRnd(language->o);
            return language;
        case 3:
            language = new programminglanguages;
            language->k = programminglanguages::FUNCTIONAL;
            InRnd(language->f);
            return language;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей языки в поток
void Out(programminglanguages &language, std::ofstream &ofst) {
    switch(language.k) {
        case programminglanguages::PROCEDURAL:
            Out(language.p, ofst);
            break;
        case programminglanguages::OBJECTORIENTED:
            Out(language.o, ofst);
            break;
        case programminglanguages::FUNCTIONAL:
            Out(language.f, ofst);
            break;
        default:
            ofst << "Incorrect language!" << std::endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление частное от деления года создания на количество символов в названии
double YearsDivideLetters(programminglanguages &language) {
    switch(language.k) {
        case programminglanguages::PROCEDURAL:
            return YearsDivideLetters(language.p);
        case programminglanguages::OBJECTORIENTED:
            return YearsDivideLetters(language.o);
        case programminglanguages::FUNCTIONAL:
            return YearsDivideLetters(language.f);
        default:
            return 0.0;
    }
}
