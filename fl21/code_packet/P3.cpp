//
// Created by Razi Khan on 3/19/25.
//

#include "my_string.h"

int main()
{
    const char* h = "hello";
    my_string s(h, 5); // 4
    s.print(); // 5
    my_string s2(s); // 6
    s2[0] = 'm';
    s.print(); // 8
    s = s2; // 9
    s.print(); // 10
    s2[0] = 'y';
    // cout << s[5] << endl; // 12
    s = s + s2; // 13
    s.print(); // 14
    return 0;
}