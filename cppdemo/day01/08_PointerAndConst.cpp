#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int b = 20;

	// 1、指针常量：指针指向的地址里的内容可以改变，指针指向的地址不能变
	// 即p1不能变
	int* const p1 = &a;
	cout << "a = " << a << endl;
	*p1 = 30;
	cout << "a = " << a << endl;

	// 2、常量指针：指针指向的地址里的内容不可改变，指针指向的地址可改变
	// 即*p2不能变
	const int* p2 = &a;
	cout << "*p2 = " << *p2 << endl;
	p2 = &b;
	cout << "*p2 = " << *p2 << endl;

	// 3、const都修饰的情况下，二者都不能变
	const int* const p3 = &a;
	cout << "*p3 = " << *p3 << endl;

	return 0;
}