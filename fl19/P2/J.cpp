//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"
#include "vector"

int main()
{
    int i = 2;
    int j = 3;
    int k = 4;
    vector<int> v;
    v.push_back(i);
    v.push_back(j);
    v.push_back(k);
    v[0] = 15;
    v[1] = 16;
    v[2] = 17;
    cout << "i:" << i << " j:" << j << " k:" << k;
}
