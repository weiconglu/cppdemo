#include<iostream>
using namespace std;

// 使用指针作为方法的形参，在方法中形参的修改影响实参

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