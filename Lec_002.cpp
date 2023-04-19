// STL 3월 2일 강의기록
// C++ template 복습 - class, 생성자, 오버로딩

#include <iostream>
using namespace std;

class Dog { 
	int n;

public:
	// 생성자, n이라는 값을 입력받아 초기화 한다.
	Dog(int n) : n{ n } {}; 

	// 오버로딩
	friend ostream& operator << (ostream& os, const Dog& dog) {
		return os << dog.n;
	}
};

void change(Dog& a, Dog& b);

int main()
{
	Dog a{ 1 }, b{ 2 };  // 자료형 - class
	// 객체 생성 -> 생성자. 
	change(a, b);
	cout << a << ", " << b << endl;
}

void change(Dog& a, Dog& b) {     
	Dog temp{ a }; // Dog의 임시객체, a를 이용해 만듦
				   // 즉 temp는 a를 복사해서 생성 -> 복사생성 없어도 돌아감
				   // why? : special 함수 6가지 ( 여기서는 a.operator = (b);와 같은 문자 : 복사할당 연산자
	a = b;
	b = temp;
}
