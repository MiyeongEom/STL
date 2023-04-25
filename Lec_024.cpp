// STL 4월 6일 강의기록

// Vector
// 파일 출력/정렬

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "String.h"
using namespace std;

// [문제] "Lec_024"의 단어를 모두 읽어 오름차순으로 정렬 후 화면에 출력하라

int main()
{
    ifstream in{ "Lec_024.cpp" };
    if (!in)
        return 0;
    //vector<String>v{ in 파일시작, 끝 };
    //vector<String> v{ istream_iterator<String>{in}, {} };
    vector<String> v{ istream_iterator<String>{in}, {} };

    sort(v.begin(), v.end(), [](const String& a, auto b) {
        return a.getString() < b.getString();
        });

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

}
