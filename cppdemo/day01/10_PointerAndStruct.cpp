#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	char gender;
	int age;
};

// ���βΣ��ڴ����Ĵ�  <---------
void StudentToString(Student s) {
	cout << s.name << ", " << s.gender << ", " << s.age << endl;
}

// ����ָ���ʹ�ã�Ϊ��ֹ��������βζ���Ϊ����ָ��(*s��������ݲ��ɱ�)
void StudentToString(const Student* s) {
	cout << s->name << ", " << s->gender << ", " << s->age << endl;
}

int main10() {

	Student s1 = { "����",'M',20 };
	Student s2;
	s2.name = "����";
	s2.gender = 'F';
	s2.age = 18;

	// 1
	StudentToString(s1);
	// 2
	StudentToString(&s2);

	return 0;
}