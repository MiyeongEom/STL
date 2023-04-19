// 개인공부
// class 예제 문제와 설명

#include <iostream>

using namespace std;

class A {
public:
	int size;
	int* array;


	//기본 생성자
	A() {
		size = 0;
		array = nullptr; //포인터 초기화
	}

	//매개변수가 있는 생성자
	A(int size){
		this->size = size;
		array = new int[size];  //int형 변수를 size만큼 생성해라.
	}

	//복사생성자
	A& operator=(const A& other) {
		if (this != &other) {
			delete[] array;  //현재 객체의 메모리 공간을 먼저 해제하고
			// other 객체의 멤버 변수와 크기에 맞게 새로운 메모리 공간을 할당한 후, 값을 복사합니다.
			size = other.size;
			array = new int[size];
			for (int i = 0; i < size; ++i)
				array[i] = other.array[i];
		}
		return *this;
	}

	//소멸자
	~A() {
		delete[] array;
	}
};