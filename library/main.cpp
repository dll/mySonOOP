#include<iostream>
#include<cstdlib>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include"PrintInfo.h"

using namespace std;

//#pragma commit(lib,"C:/Users/dll/projects/OOP/MyLib/MyLib.lib");

int main (int argc, char *argv[]) {
	Person *p=nullptr;//�����࣬p�ǳ�����ָ��
	Student s1("liuchang", "58", 'M', 13, "Seven Grade", "Eight Class");
//	s1.show();
	p=&s1;//����ת��
	p->show();//pָ��ͬ���࣬����ʾ��ͬ�������Ϣ
	
	Teacher t1("ldl", "58", 57, 'F');
//	t1.show();
	p=&t1;//����ת��
	p->show();//show���ֳ���̬����
	
	PrintInfo pi;
	pi.show(s1);
	pi.show(t1);
	
	return 0;
}

