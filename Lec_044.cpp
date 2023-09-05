// 반복자란? - iterator
// 포인터를 추상화한 것
// 반복자 category - input/output/forward/bidirectional/random_access(전통적)/
//                    contiguous 반복자(C++20)

#include <iostream>
using namespace std;

int main()
{
    // 핵심 키워드 mutable, volatile (한정자)
    
    // mutable
    // 클래스 멤버 변수에 사용
    // 해당 멤버 변수가 상수 멤버 함수 내에서 수정될 수 있음
    
    // volatile
    // 해당 변수가 프로그램의 흐름에 의해 예기치 않게 변경될 수 있음
    // 이 한정자를 사용하면 컴파일러는 해당 변수를 최적화X
    // 항상 변수의 값을 메모리에서 읽거나 쓰도록 보장
    
    // const volatile -> cv qualifier
    // cv 한정자
    // 수정할 수 없고, 예기치 않은 변경에 대비해야 함

    int n = 100;
    ++++++++n;
    // n++ 얘는 변경 불가해 ex) n++ ++ ++ 이런 것
    cout << n << endl;
}
