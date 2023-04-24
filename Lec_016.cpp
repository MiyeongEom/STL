// STL 3월 23일 강의기록

// 람다의 맹글링, 호출가능 자료형(callable type) 정리

// 호출가능한 타입 (자료형) - callable type
	// 1. 함수 포인터 (CODE에 있는 함수의 시작번지)
	// 2. 함수 객체 (function object - 함수 호출 연산자로 오버로딩한 클래스)
	// 3. 이름 없는 함수, 람다(이름 없는 객체)
	// 4. 멤버 함수 포인터
	// 5. function 타입

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

bool down(int a, int b)
{
	return a > b;
};

int main()
{
	array <int, 10> a{ 1, 3, 5, 7, 9, 2, 3, 6, 8, 10 };
	// 또 부를 것도 아닌데 왜 이름을 줘? 그래서 나온게 람다
	sort(a.begin(), a.end(), down);

	for (int n : a)
		cout << n << " ";
	cout << endl;


	// sizeof, addressof, typeid   중요.
	class Dog {};
	cout << typeid(Dog()).name() << endl;

	cout << typeid([]() {
		cout << "안녕? 난 람다야!" << endl;
		}).name() << endl;

	cout << typeid([] {}).name() << endl;

	// 맹글링 ; 이름을 맘대로 만듦
}
