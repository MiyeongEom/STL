// STL 3월 21일 강의기록
// C++ 복습 

// class
// stack에서 사용할 수 있는 수보다 더 많은 수의 자료 다루기
// - smart pointer

// [문제] 사용자가 원하는 만큼 int를 생성하라.
// int의 값을 1부터 시작하는 정수로 채워라.
// int의 합계를 화면에 출력하라.
// 이 과정을 영원히 반복하라.

#include <iostream>
#include <memory>
#include <array>
using namespace std;

int main()
{
	int i{};
	while (true) {
		int num{ 250'000'000 };

		// C++에서 사용하지 말라고 권고하는 대표
		// []과 * (raw pointer)

		unique_ptr <int[]> p{ new int[250'000'000] };
		// 자동 반환.
		// 객체p를 생성과 동시에 초기화 -> RAII(자원획득이 곧 초기화)
		// 포인터 크기와 똑같음. 메모리 손해 X, 포인터를 포장해놓은 똘똘한 포인터

		cout << ++i << "번째 할당 성공" << endl;

		if (i == 10)
			return 0;
	}

}
