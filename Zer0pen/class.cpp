//#include <iostream>
//using namespace std;
//class Seoul{
//public:
//	Seoul(); //���� ����Լ�
//	void dataShow(); // ���� ����Լ�
//private:
//	unsigned int Temp;  // ����� �������
//	unsigned int Population; // ����� �������
//};
////������ ����
//Seoul::Seoul(){
//	Temp = 30;          // ������� �ʱ�ȭ
//	Population = 1500;   // ������� �ʱ�ȭ
//}
//
//void Seoul::dataShow(){
//	cout << "������ �µ��� " << Temp << "�� �Դϴ�." << endl;
//	cout << "������ �α��� " << Population << "�� �Դϴ�." << endl;
//}
//
//int main(){
//	Seoul happy; // ������ Seoul()�� �����.
//	happy.dataShow();
//	return 0;
//}
	
#include <iostream>
using namespace std;
class Seoul{
public:     
	Seoul();
	~Seoul(); //���� �ع��Լ�. �Ҹ���
	void dataShow(); 
private:                
	unsigned int Temp;  
	unsigned int Population; 
};
Seoul::Seoul(){
	cout << "������ ȣ��" << endl;
	Temp = 30;          // ������� �ʱ�ȭ
	Population = 1500;  // ������� �ʱ�ȭ
}
// �Ҹ��� ����
Seoul::~Seoul() {
	cout << "�Ҹ��� ȣ��" << endl;
}
void Seoul::dataShow(){
	cout << "������ �µ��� " << Temp << "�� �Դϴ�." << endl;
	cout << "������ �α��� " << Population << "�� �Դϴ�." << endl;
}

int main(){
	Seoul happy; // ��ü ����. ������ Seoul()�� �����.
	happy.dataShow();
	return 0;
}