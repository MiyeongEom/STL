// STL 3월 9일 강의기록
// C++ 복습 - 많은 수 다루기

// stack, free store, code, data 영역

#include <iostream>
#include <array>
using namespace std;


array<int, 10> ga;
int gn;

void save() 
{
	return;
}

int main()
{
	array<int, 10> a; // 스택에 생깁니다, 메모리 그대로
	int n; 

	cout << "스택에 있는 a[0] - " << addressof(a[0]) << endl;
	cout << "스택에 있는 n - " << addressof(n) << endl;
	// 앞 부분 영역이 같다 -> 같은 영역이라는 소리

	cout << endl;

	cout << "Data에 있는 ga[0] - " << addressof(ga[0]) << endl;
	cout << "Data에 있는 gn - " << addressof(gn) << endl;
	// code는 data segment와 가까이 있음
	cout << endl;

	cout << "Code에 있는 main - " << addressof(main) << endl;
	cout << "Code에 있는 save - " << addressof(save) << endl;

	// 코드와 스택 사이가 free store, 동적 메모리 공간
	int* p = new int;
	cout << "Free store - " << p << endl;
}