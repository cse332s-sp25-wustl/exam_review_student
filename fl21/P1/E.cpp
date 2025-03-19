//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int arr[] = { 5,10,15,20,25 };
    int* p = arr + 1;
    cout << *p << endl;
    cout << *(arr + 1) << endl;
    cout << arr[1] << endl;
    return 0;
}

