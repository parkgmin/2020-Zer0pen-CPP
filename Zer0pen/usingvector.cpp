//������ C++ ������ �����Դϴ�!
#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v; 
	//int�� ���� �����ϴ� ��
	vector<int>v(4);
    //int�� ���� ũ�⸦ 4�� �Ҵ��Ѵ�.
	vector<int>v = { 1,2,3,4 };
	//int�� ���͸� 1,2,3,4�� �ʱ�ȭ�Ѵ�.
	vector<int>v[] = { {1,2},{3,4} };
	//int�� ������ �迭�� �����Ѵ�.
	vector<vector<int>>v;
	//2���� ���� ����
	vector<int>v = { 1,2,3,4,5 }; // ������ ������ 5�� ���� �� ���� '10'���� �ʱ�ȭ�Ѵ�.
	v.assign(5, 10);
}