#include <iostream>
#include <list>
#include "String.h"

using namespace std;
extern bool 관찰;

int main()
{
    // string도 가능합니다.
    // list에 operarions(merge, splice 등)이 존재하는 이유 : 포인터를 쓰기에 아주 유용
    list<std::string> cont1{ "안유진", "장원영", "하마"};
    list<std::string> cont2{ "지민", "지수" };

    cont1.merge(cont2);

    cout << "리스트1 - ";
    for (std::string num : cont1)
        cout << num << ' ';
    cout << endl;

    cout << "리스트2 - ";
    for (std::string num : cont2)
        cout << num << ' ';
    cout << endl;;
}
