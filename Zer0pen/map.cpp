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
