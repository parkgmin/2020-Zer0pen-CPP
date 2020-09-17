#include<iostream>
using namespace std;

void swap(int a, int b);

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a :" << a << endl;
	cout << "b :" << b << endl;
}

int main() {
	int num1 = 10;
	int num2 = 20;
	swap(num1, num2);

	cout << "num1 :" << num1 << endl;
	cout << "num2 :" << num2 << endl;

	return 0;
}