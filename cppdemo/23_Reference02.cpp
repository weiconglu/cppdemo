#include<iostream>
using namespace std;

// ������Ϊ�����ķ���ֵ

// 1����Ҫ���ؾֲ�����������
int& demo01() {
	int a = 10; // �ֲ����������ջ����demo01()ִ�����ͻᱻ�ͷ�
	return a;
}

// 2�������ĵ��ÿ�����Ϊ��ֵ
int& demo02() {
	static int b = 10; // ��̬�����������ȫ�������ڳ���ִ����ɺ���ϵͳ�ͷ�
	return b;
}

int main23()
{
	int& a = demo01();
	cout << "a = " << a << endl; // ��һ����ȷ����Ϊ���������˱���
	cout << "a = " << a << endl; // �ڶ��δ�����Ϊdemo01()��a���ڴ��Ѿ��ͷ�

	int& b = demo02();
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;

	demo02() = 200; // demo02()�ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ

	cout << "b = " << b << endl;
	cout << "b = " << b << endl;

	return 0;
}