// STL 3월 9일 강의기록
// C++ 복습 - 많은 수 다루기

#include <iostream>
#include <random>
using namespace std;

// 랜덤 엔진
default_random_engine dre;

// [문제] 임의의 값을 갖는 int 1'000개를 생성해 화면에 출력하라.
// + 가장 큰 값과 작은 값을 출력하라
int main()
{
	uniform_int_distribution<int> uid{1, 99'999};

	int max = numeric_limits<int>::min();
	int min = numeric_limits<int>::max();

	for (int i = 0; i < 1'000; ++i) {
		//cout << uid(dre) << ' ';
		int num = uid(dre);


		if (min > num)
			min = num;

		if (max < num)
			max = num;
	}
	
	cout << "최댓값 - " << max << endl;
	cout << "최솟값 - " << min << endl;
}