// STL 3월 14일 강의기록
// C++ 복습 - 많은 수 다루기 : int
// 저수준 출력(binary)

// int n : int 메모리 몇 바이트인가요? 
//   : 시스템(x64, x86)마다 다른데 적어도 2바이트 이상입니다.

#include <iostream>
#include <array>
#include <numeric>
#include <fstream>
using namespace std;

// [문제] [1, 1000] 값을 갖는 int 1'000개를 파일 "int 천개를 메모리 그대로"에 저장하라.
// int 1000개는 연속된 멤리에 저장되어 있고 4000바이트를 write함수로 기록했다.


int main()
{
	array<int, 1000> a{};
	iota(a.begin(), a.end(), 1); // 시작부터 끝까지 1씩 증가

	ofstream out{ "int 천개를 메모리 그대로", ios::binary};

	out.write((char*)&a, sizeof(int) * a.size());
	// 저수준 출력 : 기계어 맨 밑에 있기에 빠름.

}
