#include<iostream>
using namespace std;

class Circle {
private:
	double radius;
public:
	void set_radius(double r) {
		radius = r;
	}
	double get_radius() {
		return radius;
	}
	double print_area() {
		return 3.14 * radius * radius;
	}
};

int main(){
	Circle circle;
	circle.set_radius(10);

	cout << "������ :" << circle.get_radius() << endl;
	cout << "�� ���� :" << circle.print_area() << endl;

	return 0;
}