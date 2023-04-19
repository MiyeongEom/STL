// 템플렛이란?

// 함수나 클래스를 개별적으로 다시 작성하지 않아도,
// 여러 자료 형으로 사용할 수 있도록 만들어 놓은 틀
// 재사용성을 높이고, 코드의 일반성을 유지해 유지보수 용이
// 자료형 관계없이 일반화된 코드 작성 가능.

// 01. 함수 템플렛과 클래스 템플렛이 있다.

// 01 - 1. 함수 템플릿
template<typename T>
T sum(T a, T b)
{
	return a + b;
}

int main()
{
    int a = 1, b = 2;
    sum<int>(a, b);  // < >안에 어떤 자료형인지 명확하게 해주면 좋음.
}


// 01 - 2. 클래스 템플릿
// 클래스의 자료형을 일반화된 형태로 작성

template<typename T> // 클래스 정의 앞에 'template' 사용해 선언.

class MyVector {
private:
    T* data;
    int size;
public:
    MyVector(int size) {
        data = new T[size];
        this->size = size;
    }
    ~MyVector() {
        delete[] data;
    }
    void push_back(T value) {
        // ...
    }
    // ...
};


