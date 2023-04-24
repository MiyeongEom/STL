// STL 3월 14일 강의기록
// C++ 복습 - 많은 수 다루기 : int

// [문제] 파일 "int 천개를 메모리 그대로"에는 int 1000개가 저장되어 있다.
// 4000바이트를 바이너리 모드로 write 함수로 기록하였다. (반론 불가, 그대로일 것임)
// 읽어서 화면에 출력하라

#include <iostream>
#include <array>
#include <fstream>
using namespace std;

int main()
{
	ifstream in{ "int 천개를 메모리 그대로" , ios::binary};
	if (!in)
		return 0;

	array<int, 1000> a;
	in.read((char*)&a, a.size() * sizeof(int)); //read : 어디로 몇 바이트

	for (int num : a)
		cout << num << endl;
	
}