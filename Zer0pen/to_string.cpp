#include<iostream>
#include<string>
using namespace std;
int main() {
	int num1 = 10;
	float num2 = 22.1f;

	string str1 = to_string(num1);
	cout << "num1" << str1 << endl;
	cout << "num2" << to_string(num2) << endl;

	return 0;

}