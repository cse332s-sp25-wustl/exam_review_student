//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int i = 1;
    const int j = 50;
    int * p = &i;
    *p = 50;
    p = &j;
    cout << *p << endl;
}

