#include<iostream>
using namespace std;

int main() {
	const int stundents = 5;
	int grade[stundents];
	int sum = 0;
	int i, ave;
	for (i = 0; i < stundents; i++) {
		cout << "�л����� ������ �Է����ּ���:";
		cin >> grade[i];
	}
	for (i = 0; i < stundents; i++) {
		sum += grade[i];
		ave = sum / stundents;
	}
	cout << "��� :" << ave << endl;
	return 0;
}

