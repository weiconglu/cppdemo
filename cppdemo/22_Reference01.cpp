#include<iostream>
using namespace std;

// ���ã������������(���õı�����ָ�볣����ָ���ָ�򲻿ɸı䣬ָ������ݿ��Ըı�) ��������ͬһ���ڴ�ռ�
// �������� &���� = ԭ��
// ���ñ����ʼ���������ڳ�ʼ���󲻿��Ա��ı�

// ������Ϊ�����Ĳ�����ֱ�Ӳ�����ַ�����Ӱ��ʵ��
void swap(int& a, int& b);
int main22()
{
	// ���ñ�������һ��Ϸ����ڴ�ռ�
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