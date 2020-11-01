#include<iostream>
using namespace std;
class Person {
private:
	virtual void Action() = 0;
public:
	void DoAction() {
		cout << "���� ��ħ�Դϴ�."  <<  endl;
		Action();
		cout << "�߷���" << endl;
	}
};
class Student : public Person {
private:
	virtual void Action() {
		cout << "���� �սô�" << endl;
	}
};
class Employ : public Person {
private:
	virtual void Action() {
		cout << "�����սô�" << endl;
	}
};
int main() {
	Student student;
	Employ employ;
	
	student.DoAction();
	cout << endl;
	employ.DoAction();
}
