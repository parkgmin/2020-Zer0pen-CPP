#include<iostream>

using namespace std;
int main(){
	int num;
	char name[256];

	cout << "학번:";
	cin >> num;
	cout << "이름:";
	cin >> name;

	cout << "학번은" << num << "이고 이름은" << name << "입니다." << endl;
	return 0;
}


