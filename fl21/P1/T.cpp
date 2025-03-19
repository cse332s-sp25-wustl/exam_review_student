//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"
#include "vector"

int main()
{
    vector<int> v;
    v[0] = 1;
    v[1] = 2;
    int& p = v[1];
    cout << p << endl;
    return 0;
}