#include<iostream>
using namespace std;

int main() {
	const int stundents = 5;
	int grade[stundents];
	int sum = 0;
	int i, ave;
	for (i = 0; i < stundents; i++) {
		cout << "학생들의 성적을 입력해주세요:";
		cin >> grade[i];
	}
	for (i = 0; i < stundents; i++) {
		sum += grade[i];
		ave = sum / stundents;
	}
	cout << "평균 :" << ave << endl;
	return 0;
}

