// STL 3월 2일 강의기록
// C++ template 복습 -  template

// 자료형에 무관하게 클래스나 함수는 찍어내줘 -> 템플릿
#include <iostream>

using namespace std;

class Dog {
	int n;

public:
	Dog(int n) : n{ n } {};
	
	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << dog.n;
	}
};

template <class T>
// template은 위처럼 선언과 정의를 동시에 한다. (함수랑 다름)
// why? : 소스코드를 찍어야 하기에 언제나 바로 알 수 알아야함
// => 템플릿 소느는 컴파일러가 알고 있어야 하기 때문
void change(T& a, T& b) {
	Dog temp{ a };
	a = b;
	b = temp;
}

int main() {

	Dog a{ 1 }, b{ 2 };
	change(a, b);
	// 1. change(Dog, Dog); : 이 함수가 있니?
	// 2. change(Dog&, Dog&); : 이런 함수는 있니?
	// 3. 둘다 없네. 나 그럼 템플릿이 있기에 내가 만들게

	cout << a << ", " << b << endl;

}
