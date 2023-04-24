//------------------------------------------------------
// String.h - 자원을 확보하는 클래스
// 
// 2023. 3. 28
//------------------------------------------------------

#pragma once
class ostream;
class string;

class String {
	size_t len{ 0 };   // 확보한 자원 수
	// size type : 음수를 저장할 수 없음, long long : 8바이트
	char* p{};         // 자원의 주소
	size_t id = ++sid;   // 객체의 고유 id

	static size_t sid;    // static 변수의 동작을 관찰할 것(시험)

public:
	String();
	String(const char* s);
	~String();

	// 복사생성자/복사할당연산자
	String(const String& other);
	String& operator= (const String& other);

	// 이동생성자/이동할당연산자
	String(String&& other);
	String& operator=(String&& other);

	// 연산자 오버로딩 함수들
	String operator+(const String& rhs) const;

	friend std::ostream& operator<<(std::ostream& os, const String& s) {
		for (int i = 0; i < s.len; ++i)
			os << s.p[i];
		return os;
	}

	// gettor
	std::string getString() const;

	void print(const char* message) const;
};

