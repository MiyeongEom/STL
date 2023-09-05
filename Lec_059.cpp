#include <iostream>
#include <array>
#include <random>
#include <chrono>
#include <numeric>
#include "String.h"

using namespace std;
extern bool 관찰;

array<int, 250'000'000> a;
default_random_engine dre;
uniform_int_distribution uid{ 1, 100 };

int main()
{
    for (int& num : a)
        num = uid(dre);

    cout << "합계 - ";
    long long sum = 0;

    auto s = chrono::steady_clock::now();
    //for (int i = 0; i < a.size(); ++i)
    //    sum += a[i];
    sum = accumulate(a.begin(), a.end(), 0LL);  // 3번째 callable 인라인이 가능함

    // for loop보다 알고리즘을 사용하면 좋은 이유
    // 속도가 빨라졌다? - X
    // 1. 오류가 나기 어렵다
    // 2. callable 인라인 가능 ?
    // 3. 알고리즘 함수는 병렬처리 지원이 가능함 -> 멀티코어
    auto d = chrono::steady_clock::now() - s;

    cout << sum << endl;
    cout << "걸린 시간 - " << chrono::duration_cast<chrono::milliseconds>(d).count();

}