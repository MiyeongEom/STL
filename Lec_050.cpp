#include <iostream>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{
    String s{ "The quick brown fox jumps over the lazy dog" };

    // [문제] 사용자가 입력한 문자가 s에 있는지, 있다면 어느 위치에 있는가?

    while (true) {
        cout << "찾을 문자는 ? :";
        char c;
        cin >> c;

        auto p = find(s.begin(), s.end(), c);
        if (p == s.end())
            cout << "없어" << endl;
        else
            cout << distance(s.begin(), p) + 1 << "번째 문자입니다" << endl;
    }
}