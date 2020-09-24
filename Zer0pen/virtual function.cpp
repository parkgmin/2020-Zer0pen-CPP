#include <iostream>
using namespace std;
class parent {
public:
	virtual void v_print() {
		cout << "parent" << endl;
	}
	void print() {
		cout << "parent" << endl;
	}
};
class child : public parent {
public:
	void v_print() {
		cout << "child" << endl;
	}
	void print() {
		cout << "child" << endl;
	}
};
int main() {
	parent* p;
	child c;
	p = &c;

	p->v_print();
	p->print();

	return 0;
}
