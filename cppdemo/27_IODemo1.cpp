#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
* д�ļ��Ĳ���
* 1������ͷ�ļ� #include<fstream>
* 2������������
*	fstream ofs ����ofstream ofs;
* 3�����ļ�
*	ofs.open("filepath","�򿪷�ʽ");
*		ios::in		��
*		ios::out		д
*		ios::ate		��ʼλ��:�ļ�β
*		ios::app		׷��
*		ios::trunc	���ļ��Ѵ��ڣ���ɾ�����ٴ���
*		ios::binary	�����Ʒ�ʽ
* 4��д����
*	ofs << "Ҫд�������";
* 5���ر���
*	ofs.close();
*/

void write() {

	fstream osf;
	cout << sizeof(osf) << endl;
	osf.open("d:/cpp.txt", ios::out | ios::app);
	osf << "���" << endl;
	osf.close();
	cout << sizeof(osf) << endl;

}

/*
* ���ļ��Ĳ���
* 1������ͷ�ļ� #include<fstream>
* 2������������
*	fstream ifs ����ifstream ofs;
* 3�����ļ����ж��ļ��Ƿ�򿪳ɹ�
*	ifs.open("filepath","�򿪷�ʽ");
*	ifs.is_open();
*		ios::in		��
*		ios::out		д
*		ios::ate		��ʼλ��:�ļ�β
*		ios::app		׷��
*		ios::trunc	���ļ��Ѵ��ڣ���ɾ�����ٴ���
*		ios::binary	�����Ʒ�ʽ
* 4�������ݣ����ֶ�ȡ��ʽ��
*	ofs << "Ҫд�������";
* 5���ر���
*	ifs.close();
*/

void read() {
	fstream ifs;
	//ifs.open("d:/cpp.txt", ios::in);
	ifs.open("d:/0.log", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	// ��1�ֶ�ȡ��ʽ��
	//char buf[1024] = { 0 };
	//while (ifs >> buf)  // һ��һ��(������β��ո�Ͷ���һ��)�Ķ���buf�У��������β�˻᷵��false
	//{
	//	cout << buf << endl;
	//}

	// ��2��
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {  // getline(�����ݶ�������,һ�������೤)
	//	cout << buf << endl;
	//}

	// ��3��
	string line;
	while (getline(ifs, line)) { // getline()��string���ļ��еĺ���
		cout << line << endl;
	}

	// ��4��
	//char c;
	//while ((c = ifs.get()) != EOF) { // get()һ��ֻ��ȡһ���ַ���EOF end of file
	//	cout << c;
	//}

}

int main27() {
	write();
	read();
	return 0;
}