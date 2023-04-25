// STL 4월 13일 강의기록

// vector
// remove, erase - 삭제

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//--------
int main()
//--------
{
    vector<int> v{ 1,2,3,4,5 };

    // [문제] v에서 3을 제거하라.

    remove(v.begin(), v.end(), 3);   // 뭔가 하나 더 나옴

    for (int i{}; i < v.size(); ++i)
        cout << v[i] << ' ';
    cout << endl;

    v.erase(v.begin() + 2, v.begin() + 3);  // 완전히 삭제

    for (int i{}; i < v.size(); ++i)
        cout << v[i] << ' ';
    cout << endl;

    vector<int> v2{ 1,2,3,4,5 };
    //vector<int>::iterator p
    auto p = remove(v2.begin(), v2.end(), 3);
    v2.erase(p, v2.end());
    // erase-remove idiom

    for (int i{}; i < v2.size(); ++i)
        cout << v2[i] << ' ';
    cout << endl;

}
