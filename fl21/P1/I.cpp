//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int arr[] = { 5,10,15,20,25 };
    int& ref = arr[2];
    ref = arr[4];
    cout << arr[2] << endl;
    cout << arr[4] << endl;
    return 0;
}
