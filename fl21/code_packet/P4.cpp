//
// Created by Razi Khan on 3/19/25.
//

#include "palindrome.h"
using namespace std;

int main()
{
    palindrome p("anna", 4); // 3
    my_string& r = p;
    cout << r[3] << endl; // 5
    r.print(); // 6
    my_string s(p); // 7
    my_string* sp = &s;
    sp->print(); // 9
    return 0;
}