// STL 4월 6일 강의기록

// Vector
// 현재 원소 개수, 담을 수 있는 수, 원소 추가

#include <iostream>
#include <vector>
#include "String.h"
using namespace std;

int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "현재 원소의 개수 - " << v.size() << endl;   //10개 
    cout << "담을 수 있는 개수 - " << v.capacity() << endl;  //10개

    //원소 추가
    v.push_back(100);

    cout << "현재 원소의 개수 - " << v.size() << endl;   //11개 
    cout << "담을 수 있는 개수 - " << v.capacity() << endl;  //15개

    // 1.5배씩 늘어난다. 
}