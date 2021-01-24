#include<iostream>
using namespace std;

// 引用：给变量起别名(引用的本质是指针常量：指针的指向不可改变，指向的内容可以改变) 操作的是同一块内存空间
// 数据类型 &别名 = 原名
// 引用必须初始化；引用在初始化后不可以被改变

// 引用作为方法的参数，直接操作地址，亦可影响实参
void swap(int& a, int& b);
int main22()
{
	// 引用必须引用一块合法的内存空间
	// int& ref = 100;

	int a = 10;
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	int c = 100;
	int d = 200;
	cout << "c = " << c << endl;
	cout << "d = " << d<< endl;
	
	swap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	return 0;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}