// STL 4월 13일 강의기록

// vector
// 첫 주소 반환 &v[0]

#include <iostream>
#include <vector>
#include <deque>
#include "String.h"
using namespace std;

//--------
int main()
//--------
{
    vector<int> v{ 1,2,3,4,5,6 };

    if (v.data() == &v[0]) // 첫 주소 반환
        cout << "이거 출력안되면 노트북 버려야" << endl;
}


