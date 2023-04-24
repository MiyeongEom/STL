// STL 3월 30일 강의기록

// STL 소개
// 관련이 큰 라이브러리 : Concepts library, Ranges library

// 자료구조 + 알고리즘  (여기서 +는 반복자)
// Generic Programming, Container,  Iterators, Algorithms
// Adaptor, Predicates, Function Object, Callable Types
// Concepts, Ranges, Span

// 1. 컨테이너
// 2. 반복자
// 3. 알고리즘
// 이 순서로 공부하게 될 것

// 컨테이너?
// 3가지 종류가 있다

// 1) Sequence Containers
// 핵심 : 특정 메모리에 접근이 가능한 아이들

// array, vector, deque(데크), forward_list, list

// array : 크기 고정(불변)
// vector : 한 쪽으로 크기가 변경될 수 있음.
// array, vector 은 contiguous 메모리다.

// deque : contiguous X, 양방향으로 변경 가능

// forward_list : single list, 노드 기반의 리스트


// 2) Associative Containers
// 핵심 : 데이터를 빠르게 찾기 위한 아이들
// 트리 형태

// set
// map : 쌍으로 이루어짐(key-value)

// 3) Unordered Associative Containter(순서가 없는)
// 빨리 찾으려고, O(1) 내에

// hash_table 