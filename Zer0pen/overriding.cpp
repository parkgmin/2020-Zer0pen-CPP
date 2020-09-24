#include<iostream>
using namespace std;
class A {
public:
	void func() {
		cout << "A 클래스 함수 호출" << endl;
	}
};
class B : public A {
public:
	void func() {
		cout << "B 클래스 함수 호출" << endl;
	}
};	
int main() {
	B b;
	b.func();
	return 0;
}
