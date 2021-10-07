#include "container.h"

// Инициализация
void Init(container &c) {
    c.len = 0;
}

// Полная очистка контейнера
void Clear(container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

// Ввод в контейнер
void In(container &c, ifstream &ifst) {
    while (!ifst.eof()) {
        if ((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

// Ввод случайных элементов
void InRnd(container &c, int size) {
    while (c.len <= size) {
        if ((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

// Вывод всего, что в контейнере
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len - 1 << " elements." << endl;
    for (int i = 0; i < c.len - 1; i++) {
        ofst << i + 1 << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

// Сортировка контейнера по объёму фигур
void SortLanguages(container &c) {

}
