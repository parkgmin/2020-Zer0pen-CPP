//#include<iostream>
//using namespace std;
//
//int main(){
//	int *point = new int[20];
//	*point = 100;
//
//	cout << *point;
//
//	delete point;
//}

#include <iostream>
using namespace std;
int main() {
	int *point = new int[5]; 

	for (int i = 0; i < 5; i++) {
		point[i] = i;
	}

	for (int i = 0; i < 5; i++) {
		cout << point[i] << endl;
	}

	delete[] point; 
}
