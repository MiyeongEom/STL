#include <iostream>
#include <algorithm>
#include "String.h"
using namespace std;

template <class Iter, class Pred>
Iter my_find_if(Iter beg, Iter end, Pred pred)
{
    while (beg != end) {
        if (pred(*beg)) {
            return beg;
        }
        ++beg;
    }
    return end;
}

int main()
{
    String s{ "27x19412314915014838209513081948" };
    while (true) {
        cout << "찾을 문자는 ? : ";
        char c;
        cin >> c;

        auto p = my_find_if(s.begin(), s.end(), [](char c) {
            return isalpha(c);
            });//찾아줘

        if (p != s.end())
            cout << distance(s.begin(), p) + 1 << "에서 발견" << endl;
        else
            cout << "없어" << endl;

    }
}