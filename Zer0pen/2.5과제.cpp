//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car {
//public:
//	// 멤버변수선언
//	int speed; // 속도
//	int gear; // 기어
//	string color; // 색상
//
//	// 멤버함수선언
//	void speedUp() { // 속도증가멤버함수
//		speed += 10;
//	}
//
//	void speedDown() { // 속도감소멤버함수
//		speed -= 10;
//	}
//};
//int main(){
//	Car myCar;
//
//	myCar.speed = 100;
//	myCar.gear = 3;
//	myCar.color = "red";
//
//	myCar.speedUp();
//	cout << myCar.speed << endl;
//	myCar.speedDown();
//	cout << myCar.speed << endl;
//
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;

char str[50];
int main() {
	string A = "Zer0pen";
	const char *word = A.c_str();
	strcpy_s(str, word);
	cout << word << endl;
}

