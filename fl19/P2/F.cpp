//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main() {
    int i = 5;
    int j = 20;
    int &k = j;
    int *m = &i;
    k = *m;
    cout << "i:" << i << " j:" << j << endl;
}
