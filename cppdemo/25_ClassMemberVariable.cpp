#include<iostream>
using namespace std;

// thisָ��ָ�򱻵��õĳ�Ա���������Ķ�������ķǾ�̬��Ա�����з��ض�������return *this
// ��ָ����Է��ʳ�Ա���������ǲ����Է��ʳ�Ա����
// if(this == null) {return;}

/*
	�ڳ�Ա���������const�����ε���thisָ��
*/

class A {
public:
	A() {
		cout << "A()" << endl;
	}
	~A() {
		cout << "~A()" << endl;
	}
};

class B {
	A a;
public:
	B() {
		cout << "B()" << endl;
	}
	~B() {
		cout << "~B()" << endl;
	}
};

/*
	��һ�������ж����Աʱ����ִ�г�Ա����Ĺ��캯������ִ����Ĺ��캯������ִ�����������������ִ�г�Ա�������������;
*/
int main25()
{
	B b;
	cout << "sizeof b = " << sizeof(b) << endl;
	return 0;
}