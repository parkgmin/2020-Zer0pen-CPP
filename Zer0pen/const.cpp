#include<iostream>
using namespace std;
int main() {
	int a = 10;
	const int b = 10;
	int c = 30;
	
	a = c;
	//b = c;
	cout << a << endl;
}
