//제로픈 C++ 마지막 차시입니다!
#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v; 
	//int형 벡터 생성하는 법
	vector<int>v(4);
    //int형 벡터 크기를 4로 할당한다.
	vector<int>v = { 1,2,3,4 };
	//int형 벡터를 1,2,3,4로 초기화한다.
	vector<int>v[] = { {1,2},{3,4} };
	//int형 벡터의 배열을 생성한다.
	vector<vector<int>>v;
	//2차원 벡터 생성
	vector<int>v = { 1,2,3,4,5 }; // 벡터의 범위를 5로 지정 후 숫자 '10'으로 초기화한다.
	v.assign(5, 10);
}