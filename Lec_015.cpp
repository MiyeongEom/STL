// STL 3월 23일 강의기록

// callable type
// 정렬방법을 class로

#include <iostream>
using namespace std;

int main()
{
	// 연산자 오버로딩 안되는게 6개 있음 
	// 정렬 방법을 Dog로
	class Dog {
	public:
		bool operator()(int a, int b) {       //함수 호출 연산자를 오버로딩함.
			return a > b;
		}
	};
	// sort(numbers.begin(), numbers.end(), Dog());  가능

	Dog dog;

	cout << "Dog의 크기 - " << sizeof(Dog) << endl;
	cout << boolalpha << dog.operator()(10, 2) << endl;
	// dog(10, 2) : 이거 왜 돌아가? 
	// -> dog.operator()(10, 2)랑 똑같은 식이기에.

	 //이거 굳이 이름 붙여야 하나?
	//이름없는 임시 객체를 만들어 기능만 사용할래.
	cout << boolalpha << Dog()(10, 2) << endl;
}