// STL 4월 13일 강의기록

// Array
// 영문자의 개수 - tolower

#include <iostream>
#include <fstream>
#include <array>
#include "String.h"
using namespace std;

// [문제] "Lec_028.cpp"에 있는 영문자의 개수(대문자는 소문자 구분없음)를 다음과 같이 출력하라.
// a - 10
// b - 3
// ...
// z - 1

//--------
int main()
//--------
{
    //한 번 읽으면서 세면 끝나겠다.
    array<int, 26> a{};

    ifstream in{ "Lec_028.cpp" };
    if (!in)
        return 0;

    char c;

    while (in >> c) {
        if (isalpha(c))
            // a[c - 'a'] = a[c - 'a'] + 1;
            ++a[tolower(c) - 'a'];
    }

    for (int i{}; i < a.size(); ++i)
        cout << static_cast<char>('a' + i) << " - " << a[i] << endl;  //고급출력
}

