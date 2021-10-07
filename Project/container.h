#ifndef PROJECT_CONTAINER_H
#define PROJECT_CONTAINER_H

#include "programminglanguages.h"

// Инициализация
struct container {
    enum {
        max_len = 10000
    };
    int len;
    programminglanguages *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Полная очистка контейнера
void Clear(container &c);

// Ввод в контейнер
void In(container &c, std::ifstream &ifst);

// Ввод случайных элементов
void InRnd(container &c, int size);

// Вывод всего, что в контейнере
void Out(container &c, std::ofstream &ofst);

// Сортировка контейнера по объёму фигур
void SortLanguages(container &c);

#endif //PROJECT_CONTAINER_H
