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
		cout << "¿ù¿ù" << endl;
	}
};

class Cat : public Animal {
public:
	virtual void Cry() {
		cout << "³Ä¿Ë" << endl;
	}
};

int main() {
	Dog dog;
	dog.Cry();
	Cat cat;
	cat.Cry();

	return 0;
}