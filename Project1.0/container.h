#ifndef PROJECT_CONTAINER_H
#define PROJECT_CONTAINER_H

#include "programminglanguages.h"

// Инициализация
struct container {
    int len;
    programminglanguages **cont;
};

// Инициализация контейнера
void Init(container *c, int *size);

// Полная очистка контейнера
void Clear(container *c);

// Ввод в контейнер
void In(container *c, int *size, FILE *f);

// Ввод случайных элементов
void InRnd(container *c, int *size);

// Вывод всего, что в контейнере
void Out(container *c, FILE *f);

// Сортировка контейнера по объёму фигур
void SortLanguages(container *c);

#endif //PROJECT_CONTAINER_H
