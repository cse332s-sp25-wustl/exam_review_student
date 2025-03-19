//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"

short bar(short i) {
    return i;
}
long bar(long i) {
    return i;
}
int main(int argc, char * argv[]) {
    char c = 'c';
    cout << bar(c) << endl;
}
