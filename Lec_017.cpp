// STL 3월 23일 강의기록

//하드와이어드(납뎀) 코딩

#include <iostream>
using namespace std;

void jump()
{
	cout << "점프" << endl;
}

void slide()
{
	cout << "슬라이드" << endl;
}

int main()
{

	void(*zkey)(void) = jump;
	auto mkey = slide;
	// [문제] 게임의 기능을 실행 중에 바꾸고 싶다. 
	while (true) {
		cout << "키(z, m, 0, q) - ";
		char key;
		cin >> key;

		switch (key) {
		case 'z':    //하드와이어드(납뎀) 코딩
			zkey();
			break;

		case 'm':
			mkey();
			break;

		case 'o':
			if (zkey == slide) {
				zkey = jump;
				mkey = slide;
			}
			else {
				zkey = slide;
				mkey = jump;
			}
			break;

		case 'q':
			return 0;
		}
	}
};