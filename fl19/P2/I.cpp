//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main()
{
    int arr[] = {1,2,3,4,5};
    int *p = &arr[3];
    int *q = arr + 1;
    int distance = p - q;
    int difference = *p - *q;
    cout << "dist: " << distance << "diff: " << difference << endl;
}
