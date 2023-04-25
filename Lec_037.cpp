// STL 4월 20일 강의기록

// Deque - 찾기 알고리즘(find)

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <fstream>
#include <algorithm>
#include "String.h"

using namespace std;
extern bool 관찰;


int main()
{
    ifstream in{ "Lec_037.txt" };
    list<String> cont(istream_iterator<String>{in}, {});

    // 찾기 알고리즘 - find
    // 정렬해놨는데 find? nono.  ->  binary search

    while (true) {
        cout << "찾을 단어를 입력하세요 : ";
        String s;
        cin >> s;

        // [문제] 단어가 있는지? 있다면 몇 번째 단어인지 출력하라.
        auto p = find(cont.begin(), cont.end(), s); //s를 찾으면 위치를 반환함.

        if (p == cont.end()) {
            cout << "없습니다" << endl;
            continue; // 계속 돌아가도록
        }

        cout << s << " 는 " << distance(cont.begin(), p) + 1 << "번째의 단어입니다." << endl;

    }

}