#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int b = 20;

	// 1��ָ�볣����ָ��ָ��ĵ�ַ������ݿ��Ըı䣬ָ��ָ��ĵ�ַ���ܱ�
	// ��p1���ܱ�
	int* const p1 = &a;
	cout << "a = " << a << endl;
	*p1 = 30;
	cout << "a = " << a << endl;

	// 2������ָ�룺ָ��ָ��ĵ�ַ������ݲ��ɸı䣬ָ��ָ��ĵ�ַ�ɸı�
	// ��*p2���ܱ�
	const int* p2 = &a;
	cout << "*p2 = " << *p2 << endl;
	p2 = &b;
	cout << "*p2 = " << *p2 << endl;

	// 3��const�����ε�����£����߶����ܱ�
	const int* const p3 = &a;
	cout << "*p3 = " << *p3 << endl;

	return 0;
}