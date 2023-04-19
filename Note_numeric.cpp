#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// Lec_004에서 사용한 numeric_limits는
// <limis> 헤더 파일에 제공된 템플릿 클래스

// 01. numeric_limits
// ::min() : 최솟값 반환
// ::max() : 최댓값 반환

// 이것들은 모두 <limits> 헤더파일에 선언되어 있음.


// 02. <numeric> 헤더 파일
// 다양한 순차열 처리 함수들이 포함됨.
// 주로 쓰는 기능 

// 02 - 1. accumulate
// : 순차열의 항목들을 누적하여 합을 계산합니다

// 02 - 2. partial_sum 
// : 순차열의 각 위치에서 현재 위치까지의 항목들의 부분 합을 계산합니다.


// 02 - 03. exclusive_scan
// : 순차열의 각 위치에서 현재 위치까지의 항목들의 부분 합을 계산합니다.
// : 부분 합에 현재 위치의 항목은 제외합니다.


// 02 - 03. inclusive_scan
// : 순차열의 각 위치에서 현재 위치까지의 항목들의 부분 합을 계산합니다.
// : 부분 합에 현재 위치의 항목을 포함합니다.


// 02 - 04. transform_reduce
// : 순차열의 각 항목을 변환한 후 결과들의 합을 계산합니다.


// 02 - 05. inner_product
// : 두 순차열의 내적을 계산합니다.


// 02 - 06. adjacent_difference
// : 순차열에서 현재 위치의 항목과 바로 이전 위치의 항목의 차이를 계산합니다.


// 02 - 07. iota
// : 순차열에 일정한 값들을 할당합니다.
int main()
{
	vector<int> v{ 10 };
	iota(v.begin(), v.end(), 0);   // 시작, 끝, 채울 초기값
}