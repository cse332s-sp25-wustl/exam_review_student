//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

int main(int argc, char *argv[]) {
    int * p = new int(10);
    int & r = *p;
    delete p;
    p = nullptr;
    cout << r << endl;
}