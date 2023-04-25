// STL 4월 13일 강의기록

// Vector
// 공간확보를 위해 파일 크기 읽기


#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>
using namespace std;

// [문제] "Lec_029.cpp"에 있는 영문자를  vector<char>에 저장하라.
// 대문자로 바꿔, 개수를 세,, 등

int main()
{
    vector<char> v;

    auto size = filesystem::file_size("Lec_029.cpp");
    v.reserve(size);  //파일의 크기를 읽어서 예약

    cout << "소스.cpp의 크기는 - " << size << endl;

}
