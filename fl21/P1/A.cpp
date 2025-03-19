//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

void foo(int& i) {
    int j = 10;
    i = j;
    j = 0;
}
int & foo(int* p) {
    int & i = *p;
    i = 5;
    return i;
}
int main(){
    int k = 5;
    foo(k);
    cout << k << endl;
    return 0;
}