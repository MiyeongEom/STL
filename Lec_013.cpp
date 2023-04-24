// STL 3월 21일 강의기록
// C++ 복습 

// 소문자로 바꾸기, 숫자를 *로 (transform)

// [문제] "Lec_013.cpp"에 있는 문자를 모두 대문자로 바꿔라. // 읽기

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	ifstream in{ "Lec_013.cpp" }; //읽기모드
	if (!in) {
		return 0;
	}

	// transform(뭘, 어디로, 어떻게);
	// transform(입력파일을, 출력파일로, 대문자로);
	transform(istreambuf_iterator<char>{in}, {}, //입력 파일 in을 한글자씩 쓴다
		ostreambuf_iterator<char>{cout},
		[](char c) {
			return c = toupper(c);
		});

	// 숫자를 *로
	transform(istreambuf_iterator<char>{in}, {},
		ostreambuf_iterator<char>{cout},
		[](char c) {
			if (isdigit(c)) //너 숫자야?
				c = '*';
			return c;
		});

}