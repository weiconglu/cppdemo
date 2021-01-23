#include<iostream>
using namespace std;

int main06() {
	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = array;
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		cout << *p << endl;
		p++; // 移动指针遍历数组
	}
	return 0;
}