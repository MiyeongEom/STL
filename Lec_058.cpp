#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <ranges>
#include <algorithm>
#include "String.h"
using namespace std;

int main()
{
    ifstream in{ "이상한 나라의 앨리스.txt" };
    // 영화제목과 출연자들
    map<String, list<String>> slm{
        {"죠죠의 기묘한 모함", {"팬텀 블러드", "디오 브란도", "죠나단 조스타"}},
        {"인셉션",{"조셉 고든래빗", "엘런 페이지", "킬리언 머피"}}
    };

    // 원소 추가
    list<String>& actors = slm["인셉션"];  // slm["인셉션"] -> value를 돌려줌
    actors.insert(actors.begin(), "톰 하디");  // insert는 어디에 들어가야 하는지 위치 필요
    // actors.insert(std::next(actors.begin(), 2), "톰 하디");

    // 제목 변경을 원해 
    auto node = slm.extract("인셉션");
    node.key() = "Inception";
    slm.insert(move(node));

    for (auto [title, actors] : slm) {
        cout << title << " - ";
        for (const auto actor : actors) //const 잊지마]
            cout << "\"" << actor << "\" ";
        cout << endl;
    }

}
