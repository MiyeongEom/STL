#include <iostream>
using namespace std;

int main()
{
    //출력 반복자를 만들고 사용 - 출력스트림반복자 사용해야 함
    ostream_iterator<char> p{ cout }; // 모인터 커서를 찍고 있는 애임
    *p = 'A';
    ++p;  // 다음 위치 이동
    *p = 'B'; 
    *p++ = 'C';

    //반복자 : 내가 찍고있는 내용을 다룸
    // 이게 왜 출력되나?? 
    // *이 연산자, 함수야 함수..
    (p.operator*()).operator=('A');
    // 객체는 함수 쫓아가보기 전에 무슨 일이 있는지 몰라

    // 출력 연산자 : *와 ++은 별다른 일 X
    // 근데 왜 필요? : 표준에서 요구하기에 필요
    p = 'A';
    p = 'B';
    p = 'C';
}