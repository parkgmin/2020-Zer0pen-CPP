#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int &ref = a; //������ ���� -> ������ ref�� ���� a�� ����!

	cout << a << endl;
	cout << ref << endl;

	ref = 20; //������ �� �ٲٸ� ������ ���� �ٲ�

	cout << a << endl;
	cout << ref << endl;

	return 0;
}