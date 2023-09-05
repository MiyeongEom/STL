#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <ranges>
#include <random>
#include <algorithm>
#include "String.h"

using namespace std;
default_random_engine dre;
normal_distribution nd(0.0, 0.5);
uniform_int_distribution uid{ 0,99999 };

int main()
{
	map<int, int> iim;
	for (int i = 0; i < 10000; ++i) {
		int num = (int)(nd(dre) * 50 + 50);
		if (0 <= num and num < 100) {
			iim[num / 10]++;
		}
	}
	// [출력예]
	// 0 ~ 9999 = 
	// 10000 ~ 19999 = 
	// 
	// 90000 ~ 99999 = 

	for (auto [구간, 개수] : iim) {
		for (int i = 0; i < 개수 / 100; ++i) {
			cout << '*';
		}
		cout << endl;
	}
}