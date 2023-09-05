#include <iostream>
#include <set>
#include "String.h"
using namespace std;


int main()
{
    set<int> s{ 1,3,5,7,9,2,4,6,8,10 };  // 정렬됨

    for (int n : s)
        cout << n << ' ';
    cout << endl;

}