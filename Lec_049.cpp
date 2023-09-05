#include <iostream>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{
	String s{ "The quick brown fox jumps over the lazy dog" };

    transform(s.begin(), s.end(), s.begin(), [](char c) {
        if (c == 'o')
            return '*';
        });

    cout << s << endl;

    for (char c : s)
        cout << c << "'";
    cout << endl;
}