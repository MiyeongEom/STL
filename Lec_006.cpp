// STL 3월 9일 강의기록
// C++ 복습 - 많은 수 다루기
// 파일 출력, contiguous memory
// 큰 값 찾기 algorithm - max_element, min_element

#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>

using namespace std;

// [문제] random 값을 갖는 int 1'000개가 "int 천개"에 저장되어 있다.
// int 값은 글자 형식으로 빈칸으로 구분되어 저장되어 있다 <- 이 정보가 있어야 읽어올 수 있다.
// 파일을 읽기모드로 읽어 int값을 출력하라.

int main()
{
	ifstream in{ "int 천개" };
	if (!in) {
		cout << "읽기실패" << endl;
		return 0;
	}
	
	// int n;
	// int n[1'000]; // 원시적인 배열 -> 사용하지 않기를 권장.

	array<int, 1000> a; // contiguous memory
	cout << sizeof(a) << endl;    // 4000

	for (int i = 0; i < 1000; ++i) {
		in >> a[i];
	}

	// 가장 큰 값을 찾아 화면에 출력하라.
	//int maxValue = a[0];  // 데이터 1000개가 확정되었기에 맨 처음에 두는 것이 좋다.
	//for (int n : a)
	//	if (maxValue < n)
	//		maxValue = n;
	// 이것보다 더 좋은 것이 있지 않는가 => algorithm
	for (int n : a)
		cout << " " << n;

	// max_element => 큰 값 찾기 도사
	auto p = max_element(a.begin(), a.end());
	cout << "\n\n최댓값 - " << *p << endl;

	// min_element => 최솟값
	auto t = min_element(a.begin(), a.end());
	cout << "최솟값 - " << *t << endl;
}