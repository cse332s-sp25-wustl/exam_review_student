//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main() {
    int arr[] = { 5,10,15,20,25 };
    const int* q = &arr[3];
    arr[3] = 50;
    cout << *q << endl;
    q = &arr[2];
    cout << *q << endl;
    return 0;
}