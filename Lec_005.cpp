// STL 3월 9일 강의기록
// C++ 복습 - 많은 수 다루기
// 파일 입력/생성, RAII 

#include <iostream>
#include <random>
#include <fstream>

using namespace std;
default_random_engine dre;

// [문제] 임의의 값을 갖는 int 1'000개를 생성해 파일 "int 천개"에 저장해라

int main()
{
	uniform_int_distribution<int> uid{ 1, 99'999 }; 
	ofstream out{ "int 천개" };  // RAII (자원 획득은 곧 초기화다)

	for (int i = 0; i < 1'000; ++i)
		out << " " << uid(dre);

}

// RAII는 "Resource Acquisition Is Initialization"의 약어로
// 리소스를 획득(acquisition)하는 것과 초기화(initialization)를 함께 처리하는 기법을 말합니다.

// C++에서 RAII는 스마트 포인터와 같은 리소스 관리 클래스를 사용하여 메모리 누수와 같은 자원 관리 문제를 방지하는 방법입니다.
// RAII를 사용하면 객체가 생성될 때 리소스를 획득하고,
// 객체가 소멸될 때 자동으로 리소스를 해제합니다.

// 예를 들어, 동적으로 할당된 메모리를 RAII를 사용하여 관리하는 경우,
// 메모리 누수를 방지하기 위해 동적으로 할당된 메모리를 담당하는 객체를 생성하고,
// 객체가 소멸될 때 해당 메모리를 해제할 수 있습니다.이렇게 함으로써,
// 메모리 관리를 수동으로 처리하는 것보다 효율적이고 안정적인 코드를 작성할 수 있습니다.