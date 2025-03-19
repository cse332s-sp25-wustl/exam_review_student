//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int & foo(int* p) {
    int i = *p;
    i = 5;
    return i;
}
int main() {
    int k = 10;
    int & j = foo(&k);
    cout << k << " " << j << endl;
    return 0;
}