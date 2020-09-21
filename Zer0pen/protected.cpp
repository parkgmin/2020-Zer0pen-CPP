#include <iostream>

using namespace std;

class Parent {
protected:
	int id;
};

class Child : public Parent {
public:
	void set_id(int i) {
		id = i;
	}
	void print_id() {
		cout << "id : " << id << endl;
	}
};

int main(void)
{
	Child child;

	child.set_id(10);
	child.print_id();

	return 0;
}
