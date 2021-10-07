#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "container.h"

const std::string test = "./../../TestInput/", res = "./../../TestOutput/";

void error() {
    std::cout << "Command line input error";
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        error();
        return 1;
    }
    std::cout << "Program started!" << std::endl;
    container c;
    Init(c);

    if (!strcmp(argv[1], "-f")) {
        std::ifstream ifst(test + "/" + argv[2]);
        if (atoi(argv[2]) < 20) {
            In(c, ifst);
        } else {
            error();
            return 2;
        }
    } else if (!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            std::cout << "Number of languages has to be between 1 and 10000";
            return 3;
        }
        srand(static_cast<unsigned int>(time(0)));
        InRnd(c, size);
    } else {
        error();
        return 2;
    }

    // Вывод всех фигур
    std::ofstream ofst1(argv[3]);
    ofst1 << "Languages:\n";
    Out(c, ofst1);

    // Вывод отсортированных фигур
    //std::ofstream ofst2(argv[4]);
    //ofst2 << "Languages sorted by volume:\n";
    //SortShapes(c);
    // Out(c, ofst2);

    Clear(c);
    std::cout << "Stop" << std::endl;
    return 0;
}

