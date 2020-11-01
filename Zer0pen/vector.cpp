#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
	vector<int>vec = { 1,2,3,4 };

	for_each(vec.begin(), vec.end(), [&](int& n) {
		cout << n << endl;        
	});

	for_each(vec.rbegin(), vec.rend(), [&](int& n) {
		cout << n << endl;       
	});

	vector<int>::iterator itor = vec.begin();

	for (; itor != vec.end(); itor++)
		cout << *itor << endl;

	vector<int>::reverse_iterator itor2 = vec.rbegin();

	for (; itor2 != vec.rend(); itor2++)
		cout << *itor2 << endl;

}