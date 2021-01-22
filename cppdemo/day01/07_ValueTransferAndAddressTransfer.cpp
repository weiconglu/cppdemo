// 函数的分文件编写，头文件只声明不定义
#include "swap.h"

// 值传递与地址传递
int main07() {
	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "~~~~~~使用值传递~~~~~~" << endl;
	swap(a, b);
	// 使用值传递只影响形参不影响实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "~~~~~~使用值传递~~~~~~" << endl;
	cout << "******使用值传递******" << endl;
	swap(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "******使用值传递******" << endl;

	return 0;
}

// 使用值传递只影响形参不影响实参
void swap(int a, int b) {
	cout << "------------值传递函数内部----------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "------------值传递函数内部----------" << endl;
}

// 使用地址传递会影响实参的值
void swap(int* a, int* b) {
	cout << "------------地址传递函数内部----------" << endl;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	cout << "------------地址传递函数内部----------" << endl;
}