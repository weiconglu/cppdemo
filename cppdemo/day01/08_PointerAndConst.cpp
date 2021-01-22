#include<iostream>
using namespace std;

int main08() {

	int a = 10;
	int b = 20;

	// 1、指针常量：指针指向的地址里的内容可以改变，指针指向的地址不能变
	int* const p1 = &a;
	cout << "a = " << a << endl;
	*p1 = 30;
	cout << "a = " << a << endl;

	return 0;
}