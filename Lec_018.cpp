// STL 3월 28일 강의기록

// array - 정렬(ranges::sort)

#include <iostream>
#include <array>
#include <ranges>
#include <algorithm>
using namespace std;

int main()
{
	array < string, 5> a{
		"서울대에"s, "정순신"s, "민사고"s, "동창"s, "대자보"s
	};


	// 오름차순 정렬해서 출력해라
	/*
	sort(a.begin(), a.end(), [](string a, string b) {
		return a < b;
		});

	for (string str : a)
		cout << str << endl;
	*/

	ranges::sort(a);

	for (const string& str : a)
		cout << str << endl;
}