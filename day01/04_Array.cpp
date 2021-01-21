#include<iostream>
using namespace std;

int main04() {

	int array[] = { 1,2,3,4,5,6,7,8,9,10 };

	// 一维数组数组名称的用途：1、可以统计整个数组在内存中的长度；2、可以获取数组在内存中的首地地址
	cout << "array中有" << sizeof(array) / sizeof(array[0]) << "个元素" << endl;
	cout << "array数组首个元素的地址是" << (int)array << endl;

	return 0;
}
