#include <iostream>
#include <fstream>
#include <set>
#include "String.h"
using namespace std;

// Associative Containers - Set/Map
// set은 equivalence(동등성) 관계를 사용하여 uniqueness를 결정한다
// 
// 중요한 것은 정렬순서를 컨테이너에게 알려줘야 한다 (중요)
// 
// 1. 디폴트가 less<String> -> 코드 속에서 operator<를 불러
//    -> String에 operator<를 정의한다
// 2. struct less를 less<String>으로 특수화한다
// 3. 사용자가 정렬 방법을 함수 객체로 지정

int main()
{
    // s는 String을 길이 오름차순으로 정렬한다.
    //    set<String> s{ "5", "222", "1111", "44", "33333" };

    ifstream in{ "Lec_054.cpp" };

    // s는 String을 길이 오름차순으로 정렬한다.
    set<String> s{ istream_iterator<String>{in},{} }; // 입력연산자와 깊은 복사생성자 되는거 다 코딩해놔서 가능.(friend operator)


    // set에게 어떤 식으로 정렬할건지 알려줘
    // < >에서 두번째 인자에 정렬기준
    // String속에서 '<' 정의해줘야함 (얜 반복자 아님)

    for (const String& s : s)
        cout << s << endl;

}