// STL 4월 13일 강의기록

// vector
// insert와 erase

// 1. 공간을 예약하고 사용 - reserve() 메모리를 많이 쓰고 이상하게 쓰지 말도록 주의할 것
// 2. push_back 말고 emplace사용
// 3. 임의의 위치에서 삭제나 삽입이 자주 발생한다면, 다른 컨테이너를 사용해라. (push_back이외에는..)

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include "String.h"

using namespace std;
extern bool 관찰;
int main()
{
    vector<String> v{ "1", "2", "4" };

    //[문제] "2"와 "4" 사이에 "3'을 insert하라.

    관찰 = true;
    v.insert(v.begin() + 2, "3");  //4에 3을 넣어야 함, 원소의 위치는 반복자.
    관찰 = false;

    for (String& s : v)
        cout << s << ' ';
    cout << endl;

    //[문제] v에서 "3"을 제거하라.
    // 헤더파일에 답을 작성합니다.
    erase(v, "3");
    for (String& s : v)
        cout << s << ' ';
    cout << endl;
}
