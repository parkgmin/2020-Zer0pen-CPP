#include<iostream>
using namespace std;
class A {
public:
	void func() {
		cout << "A Ŭ���� �Լ� ȣ��" << endl;
	}
};
class B : public A {
public:
	void func() {
		cout << "B Ŭ���� �Լ� ȣ��" << endl;
	}
};	
int main() {
	B b;
	b.func();
	return 0;
}
