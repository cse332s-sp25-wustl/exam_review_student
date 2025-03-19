//
// Created by Razi Khan on 3/19/25.
//

#include "myvectwithstats.h"

int main(int argc, char* argv[]) {
    // ContainerStats s(100,0,0); // 1
    MyVectWithStats mvs(10, 100, 0, 0); // 2
    mvs.insert_and_update(10).insert_and_update(15); // 3
    ContainerStats* p = &mvs;
    p->print_range(); // 4
    p->print(); // 5
    return 0;
}