#include<iostream>
using namespace std;

// ʹ��new�ڶ����д������ݣ��᷵��ָ������ݵĶ�Ӧ�����͵�ָ��
// ʹ��delete�ͷ�
int main()
{

	int* p = new int(20);

	cout << "p = " << *p << endl;

	return 0;
}