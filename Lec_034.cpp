// STL 4월 18일 강의기록

// Deque
// - 벡터와는 달리 덱의 원소들은 contiguously하지 않아.
// - 덱의 저장공간은 필요에 따라 확장 및 수축된다.

#include <iostream>
#include <vector>
#include <deque>
#include "String.h"
using namespace std;

//--------
int main()
//--------
{
    deque<int> d{ 1, 2, 3, 4, 5, 6, 7, 8 };

    //for (int i = 0; i < d.size(); ++i)
    //    cout << addressof(d[i]) << endl;
    d.emplace_front(0);
    d.emplace_front(-1);
    d.push_back(9);

    for (int n : d)
        cout << n << ' ';
    cout << endl;

    for (int i = 0; i < d.size(); ++i)
        cout << addressof(d[i]) << endl;

}