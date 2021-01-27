#include<iostream>
using namespace std;

int main()
{
	string s1 = "Hello c++!";
	// 注意直接用字符串、变量的赋值方式得到的结果有区别
	string s2;
	s2.assign(s1, 5); 
	string s3;
	s3.assign("Hello c++!", 5);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	s3.append(" 你好呀");

	cout << s3 << endl;

	// find rfind replace compare insert substr

	return 0;
}