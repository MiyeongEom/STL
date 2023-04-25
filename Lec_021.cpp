// 4월 4일 내용
// Array(배열)
// - 원소 정렬, at, data(시작번지)

#include <iostream>
#include <array>
using namespace std;

//--------
int main()
//--------
{
    array<int, 10> a{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // 전체 원소를 화면에 출력한다.
    for (auto i = a.begin(); i != a.end(); ++i) {      // for - loop 가 더 직관적, end()는 한칸 더 간 끝값
        cout << *i << ' ';
    }
    cout << endl;
    // 전체 원소를 역방향으로 화면에 출력한다.
    for (auto i = a.rbegin(); i != a.rend(); ++i) {      // r만 붙이면 역방향으로 돈다.
        cout << *i << ' ';
    }
    cout << endl;

    for (auto num : a)   // 메모리가 붙어있는 애라
        cout << num << ' ';
    cout << endl;


    a.at(0) = 1234;                     // 제대로 돌아간다. reference를 return 하기 때문
    cout << a.at(0) << endl;

    cout << a.data() << endl;      // data() -> 시작 번지 얻기
}

