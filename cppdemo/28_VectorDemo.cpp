#include<iostream>
#include<vector>
using namespace std;

// vector��ʹ��
int main28() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// iterator�ı���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}