//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car {
//public:
//	// �����������
//	int speed; // �ӵ�
//	int gear; // ���
//	string color; // ����
//
//	// ����Լ�����
//	void speedUp() { // �ӵ���������Լ�
//		speed += 10;
//	}
//
//	void speedDown() { // �ӵ����Ҹ���Լ�
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

