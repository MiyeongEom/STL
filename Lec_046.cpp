#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include "String.h"
using namespace std;

template <class iter>
void algo(iter)
{
    //너는 도대체 6가지 중 어떤 분류에 속하니?
    cout << typeid(iter).name() << endl;
    // class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >
   
    //근데 이건 분류를 알 수가 없는데? 어떻게 아는가 -> 어 클래스구나
    cout << typeid(iter::iterator_category).name() << endl;
    // 반복자이면 너의 iterator 종류를 알리게 되어 있는데 ?
    // 나는 random_access를 제공하는 컨테이너야~
}

int main()
{
    vector<int> v;

    // 이 아래 두 가지가 자료형이 달라 -> 템플릿 사용해야 해
    algo(v.begin());
    algo(list<int>::iterator());  //반복자를 함수 인자로 받음
    cout << endl;

    algo(istream_iterator<char>{cin});
    // input_iterator_tag

    algo(ostream_iterator<char>{cout});
    // output_iterator_tag

    algo(forward_list<int>::iterator{}); //int가 제공하는 iterator객체를 반복자로 넘김
    // forward_iterator_tag

    algo(list<String>{}.begin());
    // bidirectional_iterator_tag

    algo(deque<int>::reverse_iterator{});
    // random_access_iterator_tag

    algo(vector<char>{}.cbegin());
    // random_access_iterator_tag
}

// 계층 구조


