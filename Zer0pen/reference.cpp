#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int &ref = a; //참조자 선언 -> 참조자 ref는 변수 a의 별명!

	cout << a << endl;
	cout << ref << endl;

	ref = 20; //별명의 값 바꾸면 변수의 값도 바뀜

	cout << a << endl;
	cout << ref << endl;

	return 0;
}