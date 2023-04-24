// STL 3월 23일 강의기록

// String class는 STL 컨테이너가 되도록 다듬는다.

#include <iostream>
#include <string>
using namespace std;

bool 관찰;

class String {
	size_t len{ 0 };   // 확보한 자원 수
	// size type : 음수를 저장할 수 없음, long long : 8바이트
	char* p{};         // 자원의 주소
	size_t id = ++sid;   // 객체의 고유 id

	static size_t sid;    // static 변수의 동작을 관찰할 것(시험)

public:
	String() {
		print("디폴트생성자");
	}

	String(const char* s) : len{ strlen(s) } {   // len값을 작성
		p = new char[len];  //포인터 주소 연결
		memcpy(p, s, len);  // DMA
		print("생성자(char*)");
	}

	~String() {
		print("소멸자");
		delete[] p;
	}

	// 복사생성자&복사할당연산자
	String(const String& other) {
		len = other.len;
		p = new char[len];  //깊은 복사, 메모리 카피
		memcpy(p, other.p, len);
		printf("복사생성자");
	}

	String& operator= (const String& other) {
		if (this == &other)   //자기자신은 할당할 이유는 없다
			return *this;

		delete[]p;

		len = other.len;
		p = new char[len];   //자기자신을 변환하는 것이기에 const는 안됨
		memcpy(p, other.p, len);

		print("할당연산자");
		return *this;
	}

	String operator+(const String& rhs) const {
		String temp;

		temp.len = len + rhs.len;
		temp.p = new char[temp.len];

		memcpy(temp.p, p, len);
		memcpy(temp.p + len, rhs.p, rhs.len);

		return temp; //넘겨줘야함.
	}


	friend ostream& operator<<(ostream& os, const String& s) {
		for (int i = 0; i < s.len; ++i)
			os << s.p[i];
		return os;
	}

	void print(const char* message) const {
		if (관찰) {
			cout << "[" << id << "] - " << message << ", 개수 : " << len <<
				", 자원의 주소 : " << (void*)p << endl;
		}
	}
};

size_t String::sid = 0;

int main()
{
	관찰 = true;

	String a{ "123" };    // 32 byte   
	String b{ "45678" };
	String c;     //디폴트 생성
	c = a + b;  // a와 b는 임시는 객체이기에 복사생성자가 필요함.
	// 살릴려면 복사할당연산자를 코딩해야 함.

	cout << c << endl;

}
