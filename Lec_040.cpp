// 2023 1학기 STL 5월 2일                                   화910 목78       (9주 2일)
// -----------------------------------------------------------------------------------------
// Sequence
// -----------------------------------------------------------------------------------------
#include <iostream>
#include <list>
#include "String.h"

using namespace std;
extern bool 관찰;

//--------
int main()
//--------
{
    list<int> cont1{ 5, 9, 1, 7, 3 };
    list<int> cont2{ 8, 2, 6, 4, 0 };
    
    cont1.sort();
    cont2.sort();

    // merge는 미리 정렬되어 있지 않으면 오류가 날 수 있다.
    cont1.merge(cont2);
    cont1.reverse();

    cout << "리스트1 - ";
    for (int num : cont1)
        cout << num << ' ';
    cout << endl;

    cout << "리스트2 - ";
    for (int num : cont2)
        cout << num << ' ';
    cout << endl;;
}

// merge (cppreference.com)
// void merge(list& other);

// The function does nothing if other refers to the same object as *this.
// this와 동일한 객체를 가리킬 때, 아무것도 수행하지 않는다.

// Otherwise, merges two sorted lists into one. 
// 그렇지 않은 경우에는 2개의 정렬된 리스트를 하나로 병합한다.

// The lists should be sorted into ascending order. (ascending - 오름차순)
// 리스트는 오름차순으로 정렬되어 있어야 한다.
// 이를 reverse()를 이용하면 내림 차순.

// No elements are copied, and the container other becomes empty 
// after the merge.
// 복사 작업은 이루어지지 않고, 병합 이후로는 다른 컨테이너는 비어있게 됨

// No iterators or references become invalidated, (invalidate = 무효로 만들다)
// 반복자나 참조자는 무효화 되지 않는다
// except that the iterators of moved elements now refer into *this, not into other.
// 이동된 요소의 반복자는 *this를 가리키게 된다. other X

// 이게 무슨 말이고,,
// 위에서 cont2가 합병되어 cont1에 저장되었다.
// cont2의 요소들이 con1로 이동되었을 뿐, 요소들의 값과 순서는 그대로 유지된다.
// 이동된 요소들의 반복자나 참조자는 여전히 유효하며, 합병된 리스트를 가르키게 됨.

// This operation is stable: 
// 이 동작은 안정적인 작업이다
// for equivalent elements in the two lists, 
// 두 개의 리스트에 있는 동등한 요소를 정렬한다

// the elements from *this shall always precede the elements from other, (precede - 앞서다)
// *this의 요소들이 other의 요소들보다 항상 앞에 위치 한다.
// and the order of equivalent elements of *this and other does not change.
// *의 this 동등한 요소의 순서는 변경되지 않는다.

// If get_allocator() != other.get_allocator(), the behavior is undefined.
// get_allocator() : 컨테이너의 할당자를 반환하는 함수

// 즉 두 리스트가 서로 다른 할당자를 갖는다면, 동작은 정의되지 않는다.

// <가 아닌 comp를 이용해 정렬됨.
// bool cmp(const Type1& a, const Type2& b);
// 첫 번쨰 인자가 두 번째 인자보다 작을 경우 true를 반환
