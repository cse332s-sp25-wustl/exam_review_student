//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int arr[] = { 5,10,15,20,25 };
    int* const r = &arr[2];
    *r = 100;
    cout << arr[2] << endl;
    r = &arr[1];
    cout << *r << endl;
    return 0;
}
