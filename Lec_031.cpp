// STL 4월 13일 강의기록

// vector
// 알아서 값 넣어줌 - iota, 홀수 삭제 - remove_if

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

// [문제] v에서 홀수를 제거하라

bool isEven(int num)
{
    return num % 2 == 1;
}

int main()
{
    vector<int> v(100);
    iota(v.begin(), v.end(), 1);

    auto p = remove_if(v.begin(), v.end(), isEven);
    v.erase(p, v.end());

    for (int n : v)
        cout << n << ' ';
    cout << endl;

    vector<int> v2(100);
    iota(v2.begin(), v2.end(), 1);
    erase(v2, [](int n) {return n & 1; });  //벡터와 스트링 전용

    //string.h에 
    // bool operator==(const Stirng& rhs) const;
    // 이라는 함수가 추가해야함.

    for (auto n : v2)
        cout << n2 << ' ';
    cout << endl;
}