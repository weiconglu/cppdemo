#include<iostream>
using namespace std;

int main08() {

	int a = 10;
	int b = 20;

	// 1��ָ�볣����ָ��ָ��ĵ�ַ������ݿ��Ըı䣬ָ��ָ��ĵ�ַ���ܱ�
	int* const p1 = &a;
	cout << "a = " << a << endl;
	*p1 = 30;
	cout << "a = " << a << endl;

	return 0;
}