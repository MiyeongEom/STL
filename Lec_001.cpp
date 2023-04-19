// STL 3월 2일 강의기록
// VS 환경 : Release/ x64,  Project 환경 : C++언어 latest, SDL off

// C++ template 복습 - cpp 기본 (초기화, 함수, &)

#include <iostream>
using namespace std;

void change(int& a, int& b);

int main()
{
	int a{ 1 }, b{ 2 };  // a는 1로, b는 2로 초기화
	change(a, b); 
	cout << a << ", " << b << endl; // 2 1

}

void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}