// �����ķ��ļ���д��ͷ�ļ�ֻ����������
#include "swap.h"

// ֵ�������ַ����
int main07() {
	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "~~~~~~ʹ��ֵ����~~~~~~" << endl;
	swap(a, b);
	// ʹ��ֵ����ֻӰ���ββ�Ӱ��ʵ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "~~~~~~ʹ��ֵ����~~~~~~" << endl;
	cout << "******ʹ��ֵ����******" << endl;
	swap(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "******ʹ��ֵ����******" << endl;

	return 0;
}

// ʹ��ֵ����ֻӰ���ββ�Ӱ��ʵ��
void swap(int a, int b) {
	cout << "------------ֵ���ݺ����ڲ�----------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "------------ֵ���ݺ����ڲ�----------" << endl;
}

// ʹ�õ�ַ���ݻ�Ӱ��ʵ�ε�ֵ
void swap(int* a, int* b) {
	cout << "------------��ַ���ݺ����ڲ�----------" << endl;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	cout << "------------��ַ���ݺ����ڲ�----------" << endl;
}