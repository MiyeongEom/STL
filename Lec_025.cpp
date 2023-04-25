// STL 4월 6일 강의기록

// Vector
// 합계 알고리즘 accumulate (누적곱셈0)

#include <iostream>
#include <vector>
#include <numeric>
#include "String.h"
using namespace std;

// [문제] 키보드에서 입력한 int의 합계와 평균을 출력하라.
// 몇 개의 제한이 나와있지 않음 -> 동적할당
// array를 제외한 모든 자료형을 쓸 수 있음.

//--------
int main()
//--------
{
    vector<int> v;
    int num;
    while (cin >> num)
        v.push_back(num);  // 컨트롤 + z키


    // for문을 썼으면 의심해보자. 이미 있는 알고리즘일 가능성이 높다
    //합계구하는 알고리즘 : accumulate
    auto sum = accumulate(v.begin(), v.end(), 0); // 누적 곱셈도 가능

    cout << "합계 - " << sum << "평균 - " << (double)sum / v.size() << endl;

}
