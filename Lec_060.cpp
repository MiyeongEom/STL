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

	// [문제] 문자(한글자)를 입력받아 그 문자가 포함된 모든 원소를 출력하라.
	while (true) {
		cout << "단어? ";
		char word;
		cin >> word;

		for (const String& p : ms) {
			if (find(p.begin(), p.end(), word) != p.end())
				cout << p << endl;
		}
		cout << endl;
	}
	// set만의 find함수 사용
}