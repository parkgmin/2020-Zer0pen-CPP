#include<iostream>
using namespace std;

class CopyObj {
private:
	double height;
	double weight;
public:
	CopyObj(const double height, const double weight);
	void ShowVar();
};

CopyObj::CopyObj(const double height, const double weight) {
	this->height = height;
	this->weight = weight;
}

void CopyObj::ShowVar() {
	cout << "Å°:" << height << endl;
	cout << "¸ö¹«°Ô:" << weight << endl;
}

int main() {
	CopyObj p1(179.7, 75.3);
	p1.ShowVar();

	cout << "-------------------------------------" << endl;

	CopyObj p2(p1);
	p2.ShowVar();

	return 0;
}