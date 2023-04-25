// STL 4월 13일 강의기록

// Vector
// emplace(class)/push_back(int)


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "String.h"
using namespace std;

//--------
int main()
//--------
{
    extern bool 관찰;
   관찰 = true;
    vector<String>v;
    v.reserve(3);

    //v.emplace_back(std::string{ "123" });
    //v.emplace_back(std::string{ "abcde" });
    //v.emplace_back(std::string{ "가나다" });
    // 여기서 emplace 효과 없음

    v.emplace_back("123");
    v.emplace_back("abcde");
    v.emplace_back("가나다");
    // 이게 제일 간결하고 바로 갖다가 쓰는 코드

    v.emplace_back(); // 디폴트 생성
    // emplace는 push_back과 다른 존재임.

    v.emplace_back(1); // X
    // int는 push_back으로 쓰고

    vector<String> x;
    //  Dog같은 객체일 때 emplace_back !

}
