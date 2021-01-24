#include<iostream>
using namespace std;

// this指针指向被调用的成员函数所属的对象；在类的非静态成员函数中返回对象本身用return *this
// 空指针可以访问成员函数，但是不可以访问成员属性
// if(this == null) {return;}

/*
	在成员函数后面加const，修饰的是this指向
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
	当一个类中有对象成员时，先执行成员对象的构造函数，再执行类的构造函数；行执行类的析构函数，再执行成员对象的析构函数;
*/
int main25()
{
	B b;
	cout << "sizeof b = " << sizeof(b) << endl;
	return 0;
}