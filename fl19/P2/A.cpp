//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include <iostream>
#include "forward_list"

int main() {
    forward_list<int> li;
    li.push_front(2);
    li.push_front(3);
    li.push_front(4);
    cout << li[2] << endl;
}