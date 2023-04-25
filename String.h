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

	friend std::istream& operator>>(std::istream& is, String& str) {
		std::string temp;
		is >> temp; // istream 객체로부터 string 값을 읽음

		// 현재 String 객체에 확보된 자원보다 읽어들인 문자열의 길이가 더 길면
		// 이전에 확보한 메모리를 모두 삭제하고, 더 큰 크기로 메모리를 다시 할당합니다.
		if (temp.length() > str.len) {
			delete[] str.p;
			str.p = new char[temp.length()];
			str.len = temp.length();
		}

		// 읽어들인 문자열을 현재 String 객체에 저장
		for (size_t i = 0; i < temp.length(); ++i) {
			str.p[i] = temp[i];
		}

		return is;
	}

	/*
	friend std::istream& operator>>(std::istream& is, String& other) {
		std::string str;
		is >> str;
		other = String(str.c_str());
		return is;
	}
	*/

	// gettor
	std::string getString() const;

	void print(const char* message) const;
};

