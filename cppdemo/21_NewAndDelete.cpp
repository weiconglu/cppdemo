#include<iostream>
using namespace std;

// 使用new在堆区中创建数据，会返回指向该数据的对应的类型的指针
// 使用delete释放
int main21() {

	int* p = new int(20);

	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;

	delete p;
	// 内存被释放后就无法访问了，提示"使用未初始化的内存"
	// cout << "p = " << *p << endl;

	return 0;
}