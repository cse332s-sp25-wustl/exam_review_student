//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "vector"
#include "iostream"

void func(vector<int>::iterator it) {
    it += 2;
    return;
}
int main(int argc, char * argv[]) {
    vector<int> v = { 0, 1, 2, 3, 4 };
    auto it = v.begin();
    func(it);
    cout << *it << endl;
    return 0;
}