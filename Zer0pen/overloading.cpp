#include<iostream>
using namespace std;
int func(int i) {
	return i;
}
char func(char c) {
	return c;
}
double func(double d) {
	return d;
}

int main() {
	int x = 1;
	char y = 'a';
	double z = 3.0;

	cout << func(x) << endl;
	cout << func(y) << endl;
	cout << func(z) << endl;
}
	