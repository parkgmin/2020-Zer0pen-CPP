#include<iostream>
using namespace std;
class Person {
private:
	virtual void Action() = 0;
public:
	void DoAction() {
		cout << "좋은 아침입니다."  <<  endl;
		Action();
		cout << "잘래요" << endl;
	}
};
class Student : public Person {
private:
	virtual void Action() {
		cout << "공부 합시당" << endl;
	}
};
class Employ : public Person {
private:
	virtual void Action() {
		cout << "과제합시다" << endl;
	}
};
int main() {
	Student student;
	Employ employ;
	
	student.DoAction();
	cout << endl;
	employ.DoAction();
}
