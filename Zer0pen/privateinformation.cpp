#include<iostream>
#include<string>

using namespace std;

class Number {
private:
	int num;
public:
	void init(int n) {
		if (n > 0) {
			num = n;
			cout << "num :" << num << endl;
		}
		else
			cout << "�ڿ��� �ƴ�" << endl;
	}
};

int main() {
	Number n;

	n.init(5);
	return 0;
}

