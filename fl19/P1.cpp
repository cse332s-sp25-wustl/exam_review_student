//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

void foo1 ( int i, int * const j, const int &k ) {
    *j = i;
    i += k;
    i = *j + k;
}
int & foo2 (int i) {
    int x = 10 * i;
    return x;
}
void foo3 ( char *& s ) {
    char first = *s;
    cout << first << endl;
    ++s;
}
int main ( int argc, char * argv[] ) {
    int a = 2;
    int b = 5;
    int c = 7;
    foo1 (a, &b, c);
    cout << a << " " << b << " " << c << endl; // 1
    int &p = foo2(5);
    cout << p << endl; // 2
    char * d = "hello";
    foo3(d); // 3
    cout << *d << endl; // 4
    return 0;
}
