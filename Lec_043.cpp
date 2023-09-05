// std::span
// 다른 시퀀스 컨테이너나 배열을 참조/조작
// 데이터 소유x, 해당 데이터를 참조

#include <iostream>
#include <span>
#include "String.h"

using namespace std;
extern bool 관찰;

void print(span <int>);   // 전달인자 int[]는 int*로 collapse된다.

int main()
{
    int a[]{ 1, 2, 3, 4, 5 };

    print(a);    // a의 원소를 화면 출력하는 함수
}

void print(span<int> a) {

    for (int num : a)
        cout << num << ' ';
    cout << endl;

};


// std::span<T> span;                기본 생성자로 빈 span 생성
// std::span<T> span(data, size);    배열 또는 컨테이너의 데이터를 참조하는 span 생성
// std::span<T> span(container);     컨테이너의 요소를 참조하는 span 생성
// std::span<T> span(begin, end);    범위 내의 요소를 참조하는 span 생성


// span - cppreference.com
//template<
//    class T,
//    std::size_t Extent = std::dynamic_extent
//> class span;

// The class template span describes an object 
// that can refer to a contiguous sequence of objects 
// with the first element of the sequence at position zero. 

// span 클래스 템플릿은 객체를 설명한다.
// 여기서의 객체 -> 연속된 객체의 시퀀스를 가리킬 수 있다
// 0번 째에 있는 시퀀스의 첫 요소와 함께

// A span can either have a static extent, 
// in which case the number of elements in the sequence 
// is known at compile - time and encoded in the type, or a dynamic extent.

// span은 정적 범위를 가질 수 있다.
// 이 경우에 시퀀스의 요소 수가
// 컴파일 타임에 알려지고 타입에 인코딩된다. 또한 동적범위도 가질 수 있다

// If a span has dynamic extent, 
// a typical implementation holds two members:  ( typical - 전형적인,  implementat - 구현 )
// a pointer to T and a size. 
// A span with static extentmay have only one member: a pointer to T.

// 동적 범위를 가지는 span일 경우
// 일반적인 구현은 두 가지 멤버를 가진다.
// : T 타입의 포인터와 크기
// 정적 범위를 갖는 SPAN은 T타입의 포인터 하나만 가질 수 있다.