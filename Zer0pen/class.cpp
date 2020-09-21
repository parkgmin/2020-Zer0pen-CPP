//#include <iostream>
//using namespace std;
//class Seoul{
//public:
//	Seoul(); //공개 멤버함수
//	void dataShow(); // 공개 멤버함수
//private:
//	unsigned int Temp;  // 비공개 멤버변수
//	unsigned int Population; // 비공개 멤버변수
//};
////생성자 정의
//Seoul::Seoul(){
//	Temp = 30;          // 멤버변수 초기화
//	Population = 1500;   // 멤버변수 초기화
//}
//
//void Seoul::dataShow(){
//	cout << "서울의 온도는 " << Temp << "도 입니다." << endl;
//	cout << "서울의 인구는 " << Population << "만 입니다." << endl;
//}
//
//int main(){
//	Seoul happy; // 생성자 Seoul()이 실행됨.
//	happy.dataShow();
//	return 0;
//}
	
#include <iostream>
using namespace std;
class Seoul{
public:     
	Seoul();
	~Seoul(); //공개 멈버함수. 소멸자
	void dataShow(); 
private:                
	unsigned int Temp;  
	unsigned int Population; 
};
Seoul::Seoul(){
	cout << "생성자 호출" << endl;
	Temp = 30;          // 멤버변수 초기화
	Population = 1500;  // 멤버변수 초기화
}
// 소멸자 정의
Seoul::~Seoul() {
	cout << "소멸자 호출" << endl;
}
void Seoul::dataShow(){
	cout << "서울의 온도는 " << Temp << "도 입니다." << endl;
	cout << "서울의 인구는 " << Population << "만 입니다." << endl;
}

int main(){
	Seoul happy; // 객체 생성. 생성자 Seoul()이 실행됨.
	happy.dataShow();
	return 0;
}