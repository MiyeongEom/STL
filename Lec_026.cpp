// STL 4월 6일 강의기록

// Vector
// 키 입력받아 정렬


#include <iostream>
#include <vector>
#include <algorithm>
#include "String.h"
using namespace std;

// [문제] 키보드에서 입력한 단어를 오름차순으로 정렬 후 출력하라.

//--------
int main()
//--------
{
    vector<String> v{ istream_iterator<String>{ cin },{} };   //돌아다니면서 cin에 해당하는거 읽어줘, 끝까지.

    sort(v.begin(), v.end(), [](const String& a, const String& b) {
        return a.getString() < b.getString();
        });

    for (const String& s : v)
        cout << s << endl;

}

