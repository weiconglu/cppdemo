#include<iostream>
using namespace std;

// ʹ��new�ڶ����д������ݣ��᷵��ָ������ݵĶ�Ӧ�����͵�ָ��
// ʹ��delete�ͷ�
int main21() {

	// �ڶ�����newһ����������
	int* p = new int(20);

	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;

	delete p;
	// �ڴ汻�ͷź���޷������ˣ���ʾ"ʹ��δ��ʼ�����ڴ�"
	// cout << "p = " << *p << endl;

	// �ڶ�����newһ������
	int* array = new int[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	// �ڶ������ͷ�����
	delete[] array;

	return 0;
}