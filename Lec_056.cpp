#include <iostream>
#include <set>
#include <fstream>
#include <ranges>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{
    ifstream in{ "이상한 나라의 앨리스.txt" };
    multiset<String> ms{ istream_iterator<String>{in},{} };
    cout << "읽은 단어 수 -" << ms.size() << endl;

    for (const String& s : ms | views::drop(1'0000) | views::take(200))
        cout << s << endl;

    // [문제] 입력한 단어가 몇 개 있는지 출력하라
    while (true) {
        cout << "찾을 단어? : ";
        String word;
        cin >> word;

        int cnt;
        if (cnt = ms.count(word))
            cout << word << " - " << cnt << endl;
        else
            cout << "없는 단어" << endl;
    }
}