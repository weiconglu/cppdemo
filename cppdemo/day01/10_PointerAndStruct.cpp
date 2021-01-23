#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	char gender;
	int age;
};

// 传形参，内存消耗大  <---------
void StudentToString(Student s) {
	cout << s.name << ", " << s.gender << ", " << s.age << endl;
}

// 常量指针的使用，为防止误操作将形参定义为常量指针(*s里面的内容不可变)
void StudentToString(const Student* s) {
	cout << s->name << ", " << s->gender << ", " << s->age << endl;
}

int main10() {

	Student s1 = { "张三",'M',20 };
	Student s2;
	s2.name = "李四";
	s2.gender = 'F';
	s2.age = 18;

	// 1
	StudentToString(s1);
	// 2
	StudentToString(&s2);

	return 0;
}