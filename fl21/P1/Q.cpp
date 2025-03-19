//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int i = 10;
    const int* p = &i;
    cout << *p << endl;
    p = nullptr;
    return 0;
}
