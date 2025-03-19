//
// Created by Razi Khan on 3/19/25.
//

#include "myvectwithstats.h"
#include "set"

int main(int argc, char * argv[])
{
    std::set<MyVectWithStats> s;
    MyVectWithStats V1(10, 100, 0, 0);
    V1.insert_and_update(10);
    V1.insert_and_update(10);
    MyVectWithStats V2(10, 100, 0, 0);
    V2.insert_and_update(50);
    V2.insert_and_update(10);
    MyVectWithStats V3(10, 100, 0, 0);
    V3.insert_and_update(4);
    V3.insert_and_update(15);
    s.insert(V1);
    s.insert(V2);
    s.insert(V3);
    for (auto start = s.begin(); start != s.end(); ++start) { // 1
        start->print(); // 2
    } // 3
    return 0;
}