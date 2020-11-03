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
	cout << "이름 :" << name << "나이 :" << age << "직장 :" << endl;
}

void Person::SetInfo(char* _name, int _age, char* _job){
	name = _name;
	age = _age;
	job = _job;
}
int main(){
	Person person;

	person.SetInfo("권병철", 30, "학교실세");
	person.GetInfo();

	return 0;
}