#include "container.h"

// Инициализация
void Init(container *c) {
    c->len = 0;
}

// Полная очистка контейнера
void Clear(container *c) {
    for (int i = 0; i < c->len; i++) {
        delete c->cont[i];
    }
    c->len = 0;
}

// Ввод в контейнер
void In(container *c, int *size, FILE *f) {
    for (int i = 0; i < *size; ++i) {
        if ((c->cont[c->len] = In(size, f)) != 0) {
            c->len++;
        }
    }
}

// Ввод случайных элементов
void InRnd(container *c, int *size) {
    while (c->len <= *size) {
        if ((c->cont[c->len] = InRnd()) != nullptr) {
            c->len++;
        }
    }
}

// Вывод всего, что в контейнере
void Out(container *c, FILE *f) {
    fprintf(f, "Container contains %d elements.\n", c->len);
    for (int i = 0; i < c->len; i++) {
        fprintf(f, "%d: ", i);
        Out(c->cont[i], f);
    }
}

// Сортировка контейнера по объёму фигур
void SortLanguages(container *c) {

}
