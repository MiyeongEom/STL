#include <iostream>
#include <algorithm>
#include "String.h"

using namespace std;

int main()
{
    String s{ "STL iterator" };

    for (char& c : s)
        c = toupper(c);

    /*transform(s.begin(), s.end(), s.begin(), [](char c) {
        return c = toupper(c);
        });
    // 무슨 종류의 카테코리인지 몰라서 죽어버림
     */


    for (auto p = s.begin(); p != s.end(); ++p)
        cout << *p << ' ';
    cout << endl;

    for (auto p = s.rbegin(); p != s.rend(); ++p)
        cout << *p << ' ';
    cout << endl;


    for (char c : s)
        cout << c << "'";
    cout << endl;


}
