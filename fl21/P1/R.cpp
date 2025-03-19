//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int i = 10;
    int* p = new int(i);
    cout << *p << endl;
    p = &i;
    cout << *p << endl;
    return 0;
}
