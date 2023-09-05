#include <iostream>
#include <list>
#include "String.h"

using namespace std;
extern bool 관찰;

int main()
{
    // list에 operarions(merge, splice 등)이 존재하는 이유 : 포인터를 쓰기에 아주 유용
    list<int> cont1{ 5, 9, 1, 7, 3 };
    list<int> cont2{ 8, 2, 6, 4, 0 };

    // auto it = cont1.begin();
    // advance(it,1);
    // cout << *it << endl;

    //cont1.splice(cont1.begin(), cont2); // 8 2 6 4 0 5 9 1 7 3
    cont1.splice(++cont1.begin()++, cont2); // 5 8 2 6 4 0 9 1 7 3

    cout << "리스트1 - ";
    for (int num : cont1)
        cout << num << ' ';
    cout << endl;

    cout << "리스트2 - ";
    for (int num : cont2)
        cout << num << ' ';
    cout << endl;;


}


// splice (cppreference.com)
// void splice( const_iterator pos, list& other,
//        const_iterator first, const_iterator last);


// splice는 other 리스트에서 
// [first, last) 범위의 요소들을 
// pos가 가리키는 요소 앞에 삽입한다.
// 이 때, pos가 [first, last) 범위 내의 반복자인 경우 동작은 정의되지 않는다

// pos, other / pos, other, const_iterator it / pos, other, first, last

// [ ] : 폐구간, 즉 이 값을 포함
// ( ) : 개구간, 값 포함 X

// No elements are copied or moved, only the internal pointers of the list nodes are re-pointed.
// 요소를 복사하거나 이동 시키지 않는다, 오직 리스트 노드의 내부 포인터를 재지정한다. (internal - 내부의)

// The behavior is undefined if get_allocator() != other.get_allocator(). 
// No iterators or references become invalidated,
// the iterators to moved elements remain valid, 
// but now refer into *this, not into other.
// merge와 동일


// auto it = list1.begin();
// std::advance(it, 2);
// 반복자 위치 조정
// 위에서 이 it의 값은 1