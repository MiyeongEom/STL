// STL 4월 18일 강의기록

// Deque - 파일출력, 정렬(views)
// - 벡터와는 달리 덱의 원소들은 contiguously하지 않아.
// - 덱의 저장공간은 필요에 따라 확장 및 수축된다.

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <fstream>
#include <ranges> //공부하세요
#include "String.h"
using namespace std;

int main()
{
    list<String> cont;

    // [문제] "Lec_035.txt"를 cont로 읽어와라.
    // 화면에 원소를 모두 출력하라. 몇 개인지 적어라.

    ifstream in{ "Lec_035.cpp" };

    if (!in)
        return 0;
    String s;
    while (in >> s)
        cont.push_back(s); // 고수준 입출력

    // list<String> cont{istream_iterator<Stirng>{in}, {}};
    // vector<String> const;
    // cont.reserve(1000);
    // cont.assign{istream_iteratior<String>{in},{}};

    cout << "모두" << cont.size() << " 단어를 읽었다." << endl;

    int i{ };
    for (String& s : cont)
        cout << ++i << " - " << s << endl;

    // 역순출력
    auto p = cont.rbegin(); //rbegin :역순
    for (int i = 0; i < cont.size(); ++i)
        cout << *p << endl;   // *연산자 - 반복자에 붙어있는 연산자. p가 가리키는 값

    // 출력하라
    for (auto p = cont.begin(); p != cont.end(); ++p)
        cout << *p << endl;

    // 역순출력
    for (auto p = cont.rbegin(); p != cont.rend(); ++p)  //p반복자를 옮겨가며 화면에 출력한다.
        cout << *p << endl;

    // 문제 ) 제일 뒤 10개를 순서대로 출력하라  이게 best!!
    for (String& s : cont | views::drop(cont.size() - 10))
        cout << s << endl;

}
