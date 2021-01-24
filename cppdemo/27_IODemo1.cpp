#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
* 写文件的步骤
* 1、包含头文件 #include<fstream>
* 2、创建流对象
*	fstream ofs 或者ofstream ofs;
* 3、打开文件
*	ofs.open("filepath","打开方式");
*		ios::in		读
*		ios::out		写
*		ios::ate		初始位置:文件尾
*		ios::app		追加
*		ios::trunc	如文件已存在，先删除，再创建
*		ios::binary	二进制方式
* 4、写数据
*	ofs << "要写入的内容";
* 5、关闭流
*	ofs.close();
*/

void write() {

	fstream osf;
	cout << sizeof(osf) << endl;
	osf.open("d:/cpp.txt", ios::out | ios::app);
	osf << "你好" << endl;
	osf.close();
	cout << sizeof(osf) << endl;

}

/*
* 读文件的步骤
* 1、包含头文件 #include<fstream>
* 2、创建流对象
*	fstream ifs 或者ifstream ofs;
* 3、打开文件并判断文件是否打开成功
*	ifs.open("filepath","打开方式");
*	ifs.is_open();
*		ios::in		读
*		ios::out		写
*		ios::ate		初始位置:文件尾
*		ios::app		追加
*		ios::trunc	如文件已存在，先删除，再创建
*		ios::binary	二进制方式
* 4、读数据（四种读取方式）
*	ofs << "要写入的内容";
* 5、关闭流
*	ifs.close();
*/

void read() {
	fstream ifs;
	//ifs.open("d:/cpp.txt", ios::in);
	ifs.open("d:/0.log", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	// 第1种读取方式：
	//char buf[1024] = { 0 };
	//while (ifs >> buf)  // 一行一行(遇到行尾或空格就读下一段)的读到buf中，如果到结尾了会返回false
	//{
	//	cout << buf << endl;
	//}

	// 第2种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {  // getline(将数据读到哪里,一次最多读多长)
	//	cout << buf << endl;
	//}

	// 第3种
	string line;
	while (getline(ifs, line)) { // getline()是string关文件中的函数
		cout << line << endl;
	}

	// 第4种
	//char c;
	//while ((c = ifs.get()) != EOF) { // get()一次只读取一个字符，EOF end of file
	//	cout << c;
	//}

}

int main27() {
	write();
	read();
	return 0;
}