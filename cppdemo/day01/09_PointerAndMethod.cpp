#include<iostream>
using namespace std;

// ʹ��ָ����Ϊ�������βΣ��ڷ������βε��޸�Ӱ��ʵ��

void xValue(int* p) {
	*p = 30;
}

int main09() {

	int a = 20;
	cout << "a = " << a << endl;
	xValue(&a);
	cout << "a = " << a << endl;
	return 0;
}