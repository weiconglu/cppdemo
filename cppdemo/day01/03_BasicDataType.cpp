#include<iostream>
using namespace std;

int main03() {

	// ����
	short a = 10;
	int b = 200;
	long c = 1000;
	long long d = 20000;

	cout << "a = " << a << endl;
	cout << "b= " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	// sizeof(������������|����)��ʾ��ռ�ڴ棬��λ�ֽ�
	cout << "shortռ��" << sizeof(short) << "���ֽ�" << endl;
	cout << "intռ��" << sizeof(int) << "���ֽ�" << endl;
	cout << "longռ��" << sizeof(long) << "���ֽ�" << endl;
	cout << "long longռ��" << sizeof(long long) << "���ֽ�" << endl;

	// ʵ��  ʵ��Ĭ��6λ��Ч���֣�������һλ��Ч����Ϊ0��������
	float f1 = 3.141592653;
	float f2 = 3.14150;
	double d1 = 3333333.333333;

	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "d1 = " << d1 << endl;

	cout << "floatռ��" << sizeof(float) << "���ֽ�" << endl;
	cout << "doubleռ��" << sizeof(double) << "���ֽ�" << endl;

	// �ַ���
	char ch = 'A';

	cout << "ch = " << ch << endl;
	cout << "char����ռ" << sizeof(char) << "���ֽ�" << endl;

	// �ַ���
	char str1[] = "C����ַ���";
	string str2 = "C++����ַ���";

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;

	cout << "str1ռ" << sizeof(str1) << "���ֽ�" << endl;
	cout << "str2ռ" << sizeof(str2) << "���ֽ�" << endl;
	cout << "stringռ" << sizeof(string) << "���ֽ�" << endl;

	// ����
	bool flag = true;

	cout << "flag = " << flag << endl;
	cout << "bool����ռ" << sizeof(bool) << "���ֽ�" << endl;

	return 0;
}