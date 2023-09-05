#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include "String.h"
using namespace std;

template <class InIter, class OutIter>
void my_copy(InIter beg, InIter end, OutIter des)
{
    while (beg != end) {
        *des = *beg;
        ++beg;
        ++des;
    }
}

int main()
{
    // String s{ "123456789" };
    //my_copy(s.begin(), s.end(), ostream_iterator<char>{cout, " - "});

    String s{ "1234567890" };
    vector<char> v;

    // vector로 copy? 메모리 먼저 잡아야겠다
    v.reserve(s.size());

    //array<char, 10> v;
    //copy(s.begin(), s.end(), v.begin());
    copy(s.begin(), s.end(), back_inserter(v));

    for (char c : v)
        cout << c << " - ";
    cout << endl;
}