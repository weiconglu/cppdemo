#include<iostream>
using namespace std;

int main04() {

	int array[] = { 1,2,3,4,5,6,7,8,9,10 };

	// һά�����������Ƶ���;��1������ͳ�������������ڴ��еĳ��ȣ�2�����Ի�ȡ�������ڴ��е��׵ص�ַ
	cout << "array����" << sizeof(array) / sizeof(array[0]) << "��Ԫ��" << endl;
	cout << "array�����׸�Ԫ�صĵ�ַ��" << (int)array << endl;

	return 0;
}