#include<iostream>
using namespace std;

int main03() {

	// 整型
	short a = 10;
	int b = 200;
	long c = 1000;
	long long d = 20000;

	cout << "a = " << a << endl;
	cout << "b= " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	// sizeof(基本数据类型|变量)显示所占内存，单位字节
	cout << "short占用" << sizeof(short) << "个字节" << endl;
	cout << "int占用" << sizeof(int) << "个字节" << endl;
	cout << "long占用" << sizeof(long) << "个字节" << endl;
	cout << "long long占用" << sizeof(long long) << "个字节" << endl;

	// 实型  实型默认6位有效数字，如果最后一位有效数字为0，则会忽略
	float f1 = 3.141592653;
	float f2 = 3.14150;
	double d1 = 3333333.333333;

	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "d1 = " << d1 << endl;

	cout << "float占用" << sizeof(float) << "个字节" << endl;
	cout << "double占用" << sizeof(double) << "个字节" << endl;

	// 字符型
	char ch = 'A';

	cout << "ch = " << ch << endl;
	cout << "char类型占" << sizeof(char) << "个字节" << endl;

	// 字符串
	char str1[] = "C风格字符串";
	string str2 = "C++风格字符串";

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;

	cout << "str1占" << sizeof(str1) << "个字节" << endl;
	cout << "str2占" << sizeof(str2) << "个字节" << endl;
	cout << "string占" << sizeof(string) << "个字节" << endl;

	// 布尔
	bool flag = true;

	cout << "flag = " << flag << endl;
	cout << "bool类型占" << sizeof(bool) << "个字节" << endl;

	return 0;
}