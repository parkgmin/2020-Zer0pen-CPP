#include<iostream>

using namespace std;

class Person{
private:
	char* name;
	int age;
	char* job;
public:
	void GetInfo();
	void SetInfo(char* _name, int _age, char* _job);
};

void Person::GetInfo(){
	cout << "�̸� :" << name << "���� :" << age << "���� :" << endl;
}

void Person::SetInfo(char* _name, int _age, char* _job){
	name = _name;
	age = _age;
	job = _job;
}
int main(){
	Person person;

	person.SetInfo("�Ǻ�ö", 30, "�б��Ǽ�");
	person.GetInfo();

	return 0;
}