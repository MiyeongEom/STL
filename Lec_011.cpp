// STL 3월 14일 강의기록
// C++ 복습 - 많은 수 다루기 : class

// class binary 파일 출력

// 파일 "Dog 천마리"에는 몇 마리인지 모르는 Dog가 저장되어 있다   // 불러온 사이즈 나누기 도그 사이즈
// 파일은 binary모드로 열었고 write 함수로 저장하였다.
// 모두 읽어 Dog 정보를 cout으로 출력하라

#include <iostream>
#include <fstream>
using namespace std;

class Dog {
	char c;    //클래스 도구 정보 있음
	int n;

public:
	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << "글자 - " << dog.c << ", 숫자 - " << dog.n;
	}

	friend istream& operator>>(istream& is, Dog& dog) {
		return is.read((char*)&dog, sizeof(Dog));  //내부에서 저수준으로 돌리기 가능
	}
};

int main()
{
	ifstream in{ "Dog 천마리", ios::binary };

	Dog dog;

	while (in >> dog) //읽음과 동시에 출력
		cout << dog << endl;

}

