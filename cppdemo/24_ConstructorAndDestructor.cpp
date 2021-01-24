#include<iostream>
using namespace std;

/*
* 需要写上public
	构造函数：对象在创建时系统自动调用，为对象属性赋初值
	析构函数：对象在销毁前系统自动调用，执行一些清理工作

	构造函数语法：类名(参数){}
	析构函数语法：~类名(){} 不可以有参数

	构造函数的规则：
	默认情况下编译器至少给一个类添加3个函数：1、默认无参构造；2、默认无参析构；3、默认拷贝构造函数（对属性进行拷贝）

*/

/*
* Shallow Copy And Deep Copy
* 浅拷贝：简单的赋值操作；编译器提供的默认拷贝构造函数即为浅拷贝；如果用到堆区的内存，则会造成堆区内存重复释放
* 深拷贝：在堆区重新申请空间，进行拷贝操作
*
* 为了解决浅拷贝的问题，需要自己重写拷贝构造函数，手动重新申请堆区内存；再重写析构函数，在堆区释放内存
*
*/

class Person {

	string name;
	int age;

public:
	/*
	* 构造函数：
	*	按参数类型：有参构造，无参构造
	*	按类型分为：普通构造，拷贝构造
	*/
	Person() {
		cout << "Person()" << endl;
	}
	Person(string name, int age) {
		cout << "Person(string name,int age)" << endl;
		this->name = name;
		this->age = age;
	}
	/*
	* 注意拷贝构造的写法
	* 做以下3种操作时会调用拷贝构造函数：
	*	1、使用一个已经创建完毕的对象来初始化一个新对象； Person p2 = Person(p1)
	*	2、值传递的方式给函数传值； void func(Person p)
	*	3、以值方式返回局部对象；Person function(){return Person p}
	*/
	Person(const Person& p) {
		cout << "Person(const Person& p)" << endl;
		this->name = p.name;
		this->age = p.age;
	}
	~Person() {
		cout << "~Person()" << endl;
	}

};

int main24() {

	/*
	* 构造函数的调用方式：括号法；显示法；隐式转换法
	*/
	// 1、括号法
	Person p1;
	Person p2("张三", 20);
	Person p3(p2);

	// 注意1：调用默认构造函数时，不要加()；因为编译器会将其认为是一个返回值为Person的函数的声明
	Person p();

	// 2、显式法
	Person p4;
	Person p5 = Person("李四", 18);
	Person p6 = Person(p5);

	// 匿名对象，特点：当前行执行完毕后，系统会立即回收该匿名对象
	//Person("王五", 20);
	//cout << "上面这个被回收了" << endl;

	// 注意2：不要用一个拷贝构造函数初始化匿名对象；编译器会解释为 Person(p6) -> Person p6，认为是重定义
	//Person(p6);

	// 3、隐式转换法
	Person p7 = { "赵六",28 };  // 相当于Person p7 = Person("赵六",28);
	Person p8 = p7; // 相当于调用拷贝构造函数 Person p8 = Person(p7);

	return 0;
}