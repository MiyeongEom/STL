// STL 4월 18일 강의기록

// Deque - 중복제거

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <fstream>
#include <algorithm>
#include "String.h"

using namespace std;

int main()
{
    ifstream in{ "Lec_036.cpp" };
    list<String> cont(istream_iterator<String>{in}, {});

    vector<String> v{ cont.begin(), cont.end() };

    // sort는 random access족만 해줌. 
    cont.sort([](String& a, String& b) {
        return a.getString() < b.getString();
        });
    cont.unique();  // sort하고 안쓰면 중복된거 안사라짐.

    for (String& s : v)
        cout << s << endl;

}