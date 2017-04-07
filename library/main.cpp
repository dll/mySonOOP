#include<iostream>
#include<cstdlib>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include"PrintInfo.h"

using namespace std;

//#pragma commit(lib,"C:/Users/dll/projects/OOP/MyLib/MyLib.lib");

int main (int argc, char *argv[]) {
	Person *p=nullptr;//抽象类，p是抽象类指针
	Student s1("liuchang", "58", 'M', 13, "Seven Grade", "Eight Class");
//	s1.show();
	p=&s1;//向上转换
	p->show();//p指向不同子类，会显示不同对象的信息
	
	Teacher t1("ldl", "58", 57, 'F');
//	t1.show();
	p=&t1;//向上转换
	p->show();//show表现出多态性质
	
	PrintInfo pi;
	pi.show(s1);
	pi.show(t1);
	
	return 0;
}

