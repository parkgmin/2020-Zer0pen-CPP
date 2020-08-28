//Zer0pen C++ Vector Matrix
//Vs는 모두 2017버전으로 진행됩니다!
//궁금하신것이 있다면 비공개 댓글란에 댓글을 달아주시거나 개인적으로 연락을 주세요 :)
/*#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;
using Matrix = vector<vector<int>>;

void print(const Matrix& mat) {
	for (unsigned row = 0; row < mat.size(); row++) {
		for (unsigned col = 0; col < mat[row].size(); col++) {
			cout << setw(4) << mat[row][col];
		}
		cout << endl;
	}
	cout << endl;
	for (const vector<int>& row : mat) {
		for (int col : row) {
			cout << setw(4) << col;
		}
		cout << endl;
	}
	cout << endl;

	for (auto row : mat) {
		for (auto col : row) {
			cout << setw(4) << col;
		}
		cout << endl;
	}

}

int main() {
	Matrix mat{ {1,2,3},{4,5,6} };

	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	mat[1][0] = 4;
	mat[1][1] = 5;
	mat[1][2] = 6;

	print(mat);

	return 0;
}*/

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	map<string,int>m;
	m.insert(pair<string, int>("abc", 4));
	m.insert(make_pair("ab", 4));
	m["abcd"] = 6;
	m["abcde"] = 8;

	cout << m.size() << endl;
	m.erase("abc");

	cout << "abc:" << m.count("abc") << endl;
	cout << "ab:" << m.count("ab") << endl;
	
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << "Key:" << it->first << "Value:" << it->second << endl;
	}
	m.clear();
	cout << m.empty();
	return 0; 
	
}
