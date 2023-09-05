#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <ranges>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{
	ifstream in{ "이상한 나라의 앨리스.txt" };

	// [문제] 소설에서 사용된 문자의 빈도를 다음과 같이 출력하라.
	// a - 200;
	// z - 20

	/*
	map<char, int> cim;
	char c;
	while (in >> c) {
		if (isalpha(c))
			cim[tolower(c)]++;
	}

	for (auto [문자, 개수] : cim)
		cout << 문자 << " - " << 개수 << endl;
	*/

	// [문제] 소설에서 사용된 단어의 빈도를 많이 사용된 순서로 출력하라.
	// a - 200;
	// z - 20
	map<String, int> sim;
	map<int, String> ism;

	String str;
	while (in >> str) {
		sim[str]++;
	}

	for (auto [s, i] : sim) {
		ism.insert({ i, s });
	}

	for (auto [i, s] : ism | views::reverse) {
		cout << s << " - " << i << endl;
	}
	
}