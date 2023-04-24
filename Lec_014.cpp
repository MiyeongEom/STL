// STL 3월 21일 강의기록

// ranges - sort(오름/내림차순), views::drop

// 컴파일러가 값을 알 수 있는 시점  int num;  int a[num]; 이 안되는 이유.
// 1. 컴파일 시에 결정 -> []
// 2. 실행시에 결정    -> new

// [문제] 랜덤값을 갖는 int 10'000'000개를 준비해라.   -> DATA와 FREE STROE에 들어갈 수 있다
// 오름차순으로 정렬하라
// 값을 화면에 출력하라

#include <iostream>
#include <array>
#include <random>
#include <format>
#include <ranges>     // C++20
using namespace std;

array <int, 10'000'000> numbers;
default_random_engine dre;
uniform_int_distribution<int> uid{ 1, 10'000'000 };

bool down(int a, int b)
{
	return a > b;    //true면 안바뀜
}

int main()
{

	for (int& num : numbers)
		num = uid(dre);

	// 오름차순 정렬 - sort
	//ranges::sort(numbers.begin(), numbers.end());

	// 내림(descendign) 차순(order) 정렬 - sort
	ranges::sort(numbers.begin(), numbers.end(), down);

	// 뒤에 있는 것 100개만 출력
	for (int num : numbers |
		views::drop(numbers.size() - 100))
		cout << format("{:10}", num);

}
