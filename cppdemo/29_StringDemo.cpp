#include<iostream>
using namespace std;

int main()
{
	string s1 = "Hello c++!";
	// ע��ֱ�����ַ����������ĸ�ֵ��ʽ�õ��Ľ��������
	string s2;
	s2.assign(s1, 5); 
	string s3;
	s3.assign("Hello c++!", 5);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	s3.append(" ���ѽ");

	cout << s3 << endl;

	// find rfind replace compare insert substr

	return 0;
}