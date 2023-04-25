#include <iostream>
#include <fstream>
#include <array>
using namespace std;


int main()
{
    // 파일 "소스.cpp"에서 단어 100개를 a로 읽어와라
    array<std::string, 100> a;      // 숙제 std::string -> String 으로 바꿔서 돌아가도록 코딩

    ifstream in{ "Lec_022.cpp" };

    for (int i = 0; i < 100; ++i)
        in >> a[i];

    // 오름차순정렬
    for (std::string& str : a)
        cout << str << endl;
}
