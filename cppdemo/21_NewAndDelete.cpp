#include<iostream>
using namespace std;

// ʹ��new�ڶ����д������ݣ��᷵��ָ������ݵĶ�Ӧ�����͵�ָ��
// ʹ��delete�ͷ�
int main21() {

	int* p = new int(20);

	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;

	delete p;
	// �ڴ汻�ͷź���޷������ˣ���ʾ"ʹ��δ��ʼ�����ڴ�"
	// cout << "p = " << *p << endl;

	return 0;
}