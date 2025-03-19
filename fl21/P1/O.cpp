//
// Created by Razi Khan on 3/19/25.
//

using namespace std;

#include "iostream"
#include "string"

int main()
{
    const string cpp_s = "CSE";
    string& cpp_r = cpp_s;
    cpp_r[0] = 'E';
    cout << cpp_s << endl;
    return 0;
}