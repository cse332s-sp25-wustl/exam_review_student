//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int * func() {
    int j = 10;
    int * p = new int(j);
    return p;
}
int main(int argc, char *argv[]) {
    int * p = func();
    cout << *p << endl;
    delete p;
    return 0;
}
