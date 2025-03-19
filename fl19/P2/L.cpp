//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int arr[5] = { 1,2,3,4,5 };
    int * const p = arr + 2;
    cout << *p << endl;
    ++p;
    cout << *p << endl;
}