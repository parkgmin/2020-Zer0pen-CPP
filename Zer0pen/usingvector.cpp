#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
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


	//v.begin() ���� �������� �ּڰ� ��ȯ
	for_each(v.begin(), v.end(), [&](int& n) {
		cout << n << endl;    
	});
	//v.end() ����(���κ� + 1) �ּڰ� ��ȯ
	vector<int>::iterator itor = v.begin();

	for (; itor != v.end(); itor++)
		cout << *itor << endl;
	//v.rbegin() ������ �� ������ ���������� ��ȯ
	for_each(v.rbegin(), v.rend(), [&](int& n) {
		cout << n << endl;    
	});
	//v.rend() ����(���ۺκ� + 1) ������ �� �κ����� ��ȯ
	vector<int>::reverse_iterator itor2 = v.rbegin();

	for (; itor2 != v.rend(); itor2++)
		cout << *itor2 << endl;


	//v.at(i) ������ i��° ��� ����(���� �˻�)
	cout << v.at(1) << endl;
	//v.[i] ������ i��° ��� ����(���� �˻� X)
	cout << v[2] << endl;
	//v.front() ������ ù��° ��� ����
	cout << v.front() << endl;
	//v.back() ������ ������ ��� ����
	cout << v.back() << endl;

	//v.push_back() ������ ������ �κп� ���ο� ��� �߰�
	//v.pop_back() ������ ������ �κ� ����
	//v.insert(������ ��ġ�� �ּ� ��, ���� ��) ����ڰ� ���ϴ� ��ġ�� ��� ���� 
	//v.emplace(������ ��ġ�� �ּ� ��, ���� ��) ����ڰ� ���ϴ� ��ġ�� ��� ����(move�� ���� ��������� X) 
	//v.emplace_back() ������ ������ �κп� ���ο� ��� �߰�(move�� ���� ��������� X) 
	//v.clear() ������ ��� ��Ҹ� �����.(return size = 0)
	//v.resize(���� ��)  ������ ����� �����Ѵ�.(���� �ʰ��� 0���� �ʱ�ȭ) 
	//v.swap(���� ����)  ���Ϳ� ���͸� �����Ѵ�.
}