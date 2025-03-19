//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

void foo(int i, int& j, int* k) {
    ++i;
    k = &j;
    *k = 10;
    k = &i;
    *k = 5;
}
int main()
{
    int i = 10;
    int j = 20;
    int k = 30;
    foo(i, j, &k);
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    return 0;
}
