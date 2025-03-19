//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int arr[] = { 5,10,15,20,25 };
    int* p = arr + 1;
    cout << (arr + 4) - p << endl;
    cout << *(arr + 4) - *p << endl;
    return 0;
}
