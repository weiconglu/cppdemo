#include<iostream>
using namespace std;

// 引用作为参数的返回值

// 1、不要返回局部变量的引用
int& demo01() {
	int a = 10; // 局部变量存放在栈区，demo01()执行完后就会被释放
	return a;
}

// 2、函数的调用可以作为左值
int& demo02() {
	static int b = 10; // 静态变量，存放在全局区，在程序执行完成后由系统释放
	return b;
}

int main23()
{
	int& a = demo01();
	cout << "a = " << a << endl; // 第一次正确，因为编译器做了保留
	cout << "a = " << a << endl; // 第二次错误，因为demo01()中a的内存已经释放

	int& b = demo02();
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;

	demo02() = 200; // demo02()的返回值是引用，这个函数调用可以作为左值

	cout << "b = " << b << endl;
	cout << "b = " << b << endl;

	return 0;
}