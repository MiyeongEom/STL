// STL 3월 30일 강의기록

// 이동생성자, 이동할당연산자, 파일 분리(String.h/String.cpp)
// String class는 STL 컨테이너가 되도록 다듬는다.

#include <iostream>
#include <array>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{

	array<String, 3> arr{"345", "12", "6789"};
	
	extern bool 관찰;
	관찰 = true;
	// arr을 오름차순으로 정렬하라.
	
	sort(arr.begin(), arr.end(), [](const String& a, const String& b) {   // & : 복사하지마
		return a.getString() < b.getString();
		});
	관찰 = false;

	for (String& s : arr)
		cout << s << endl;

	//  복사생성자 -> 이동생성자
}
