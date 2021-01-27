#include<iostream>
#include<vector>
using namespace std;

// vector的使用
int main28() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// iterator的遍历
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}