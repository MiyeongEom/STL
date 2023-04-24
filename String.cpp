//------------------------------------------------------
// String.cpp - 자원을 확보하는 클래스
// 
// 2023. 3. 28
//------------------------------------------------------
#include <iostream>
#include <string>
#include "String.h"

bool 관찰{ false };     // 관찰하려면 true로 바꿀 것


String::String() 
{
	print("디폴트생성자");
}

String::String(const char* s) : len{ strlen(s) }
{   // len값을 작성
	p = new char[len];  //포인터 주소 연결
	memcpy(p, s, len);  // DMA
	print("생성자(char*)");
}

String::~String()
{
	print("소멸자");
	delete[] p;
}

	// 복사생성자/복사할당연산자
String::String(const String& other)
{
	len = other.len;
	p = new char[len];
	memcpy(p, other.p, len);
	print("복사생성자");
}

String& String::operator= (const String& other)
{
		if (this == &other)   //자기자신은 할당할 이유는 없다
			return *this;

		delete[]p;

		len = other.len;
		p = new char[len];   //자기자신을 변환하는 것이기에 const는 안됨
		memcpy(p, other.p, len);

		print("복사할당연산자");
		return *this;
}

	// c++11부터 move semantic이 지원
String::String(String&& other)
{
	len = other.len;
	p = other.p;

	// 이동된 객체 초기화
	other.len = 0;
	other.p = nullptr;

	print("이동생성자");
}

String& String:: operator=(String&& other)
{
	// 자기자신 필요없음
	if (this == &other)
		return *this;

	// 이미 할당한 자원 반환
	delete[] p;

	// other 자원 이동
	len = other.len;
	p = other.p;

	// other 자원 초기화
	other.p = nullptr;
	other.len = 0;

	print("이동할당연산자");
}

String String::operator+(const String& rhs) const 
{
	String temp;

	temp.len = len + rhs.len;
	temp.p = new char[temp.len];

	memcpy(temp.p, p, len);
	memcpy(temp.p + len, rhs.p, rhs.len);

	return temp; //넘겨줘야함.
}

	// get
std::string String::getString() const
{
	return std::string(p, len);
}

void String::print(const char* message) const 
{
	if (관찰) {
		std::cout << "[" << id << "] - " << message << ", 개수 : " << len <<
			", 자원의 주소 : " << (void*)p << std::endl;
	}
}

size_t String::sid = 0;