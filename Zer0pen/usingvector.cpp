#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
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


	//v.begin() 벡터 시작점의 주솟값 반환
	for_each(v.begin(), v.end(), [&](int& n) {
		cout << n << endl;    
	});
	//v.end() 벡터(끝부분 + 1) 주솟값 반환
	vector<int>::iterator itor = v.begin();

	for (; itor != v.end(); itor++)
		cout << *itor << endl;
	//v.rbegin() 벡터의 끝 지점을 시작점으로 반환
	for_each(v.rbegin(), v.rend(), [&](int& n) {
		cout << n << endl;    
	});
	//v.rend() 벡터(시작부분 + 1) 지점을 끝 부분으로 반환
	vector<int>::reverse_iterator itor2 = v.rbegin();

	for (; itor2 != v.rend(); itor2++)
		cout << *itor2 << endl;


	//v.at(i) 벡터의 i번째 요소 접근(범위 검사)
	cout << v.at(1) << endl;
	//v.[i] 벡터의 i번째 요소 접근(범위 검사 X)
	cout << v[2] << endl;
	//v.front() 벡터의 첫번째 요소 접근
	cout << v.front() << endl;
	//v.back() 벡터의 마지막 요소 접근
	cout << v.back() << endl;

	//v.push_back() 벡터의 마지막 부분에 새로운 요소 추가
	//v.pop_back() 벡터의 마지막 부분 제거
	//v.insert(삽입할 위치의 주소 값, 변수 값) 사용자가 원하는 위치에 요소 삽입 
	//v.emplace(삽입할 위치의 주소 값, 변수 값) 사용자가 원하는 위치에 요소 삽입(move로 인해 복사생성자 X) 
	//v.emplace_back() 백터의 마지막 부분에 새로운 요소 추가(move로 인해 복사생성자 X) 
	//v.clear() 백터의 모든 요소를 지운다.(return size = 0)
	//v.resize(수정 값)  백터의 사이즈를 조정한다.(범위 초과시 0으로 초기화) 
	//v.swap(백터 변수)  백터와 백터를 스왑한다.
}