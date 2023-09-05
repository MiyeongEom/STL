#include <iostream>
#include <algorithm>

using namespace std;

template <class 반복자>
void algo(반복자 iter)
{
	cout << typeid(iterator_traits<반복자>::iterator_category).name() << endl;
}

int main()
{
	int a[10]{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

	sort(&a[0], &a[10]);

	int* p;
	algo(p);

}

// 포인터는 반복자의 조건을 만족하지만,
// 명시적인 타입을 가지고 있지 않아 템플릿 인자로 전달될 때
// 타입 추론에 문제가 발생합니다.