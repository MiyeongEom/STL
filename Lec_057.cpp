#include <iostream>
#include <vector>
#include <fstream>
#include <ranges>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{
    ifstream in{ "이상한 나라의 앨리스.txt" };
    vector<String> ms{ istream_iterator<String>{in},{} };
    cout << "읽은 단어 수 -" << ms.size() << endl;

    for (const String& s : ms | views::drop(1'0000) | views::take(200))
        cout << s << endl;

    // [문제] 입력한 단어가 몇 개 있는지 출력하라
    while (true) {
        cout << "찾을 단어? : ";
        String word;
        cin >> word;

        auto [하한, 상한] = equal_range(ms.begin(), ms.end(), word);

        int cnt = 상한 - 하한;
        if (cnt) {
            cout << word << " - " << cnt << endl;
        }
        else
            cout << "없어" << endl;
    }
}

// views::drop(n)는 뷰(범위)를 생성하는 함수로, 
// 주어진 범위의 처음 n개의 요소를 건너뛰고 그 이후의 요소들로 구성된 새로운 뷰를 반환

// views::take(n)는 뷰(범위)를 생성하는 함수

//equal_range(first, last, value):
// equal_range 함수는 이진 검색을 수행하여 
// 주어진 범위[first, last)에서 
// value와 일치하는 요소들의 범위를 찾습니다.

