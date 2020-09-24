#include<iostream>
using namespace std;

class Animal{
public:
	virtual ~Animal();
	virtual void Cry() = 0;
};

class Dog : public Animal {
public:
	virtual void Cry() {
		cout << "����" << endl;
	}
};

class Cat : public Animal {
public:
	virtual void Cry() {
		cout << "�Ŀ�" << endl;
	}
};

int main() {
	Dog dog;
	dog.Cry();
	Cat cat;
	cat.Cry();

	return 0;
}