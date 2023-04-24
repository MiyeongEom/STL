// STL 3월 14일 강의기록
// C++ 복습 - 많은 수 다루기 : class

// class binary 파일 입력

// [문제] Dog 1000마리를 파일 "Dog 천마리"에 저장하라.
// 파일은 binary 모드로 열고 write 로 함수로 저장하라.

#include <iostream>
#include <random>
#include <fstream>
using namespace std;

default_random_engine dre;
uniform_int_distribution<int> uidNum{ 1, 10'000 };
uniform_int_distribution<int> uidChar{ 'a', 'z' };  // 도그를 생성할 때마다 이 값중 하나가 들어감

class Dog {
	// 메모리 바인드, 패딩을 넣어 8바이트만큼 메모리를 희생시켜서 속도를 얻음
	char c;
	int n;

public:
	//생성자
	Dog(){
		c = uidChar(dre);
		n = uidNum(dre);
	}

	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << "글자 - " << dog.c << ", 숫자 - " << dog.n;
	}
};

int main()
{
	ofstream out{ "Dog 천마리", ios::binary };
	for (int i = 0; i < 1000; ++i) {
		Dog dog;
		out.write((char*)&dog, sizeof(Dog));
	}

}
