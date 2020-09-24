#include<iostream>
#include<string>
using namespace std;

char str[30];
int main() {
	string A = "abcde";
	const char *K = A.c_str();
	strcpy_s(str, K);
	cout << K << endl;
}

