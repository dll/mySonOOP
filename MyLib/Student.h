#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstdlib>
#include"Person.h"

using namespace std;

class Student : public Person{
	
private:
	string name;//姓名
	string studnum;//学号
	char gender;//性别
	unsigned age;//年龄
	string grade;//年级
	string classes;//班级	
public:
	Student();//默认无参构造函数
	~Student();//析构函数
	Student(string n,string s,char g,unsigned a,string gr,string c):
		name(n),studnum(s),gender (g),age (a),grade(gr),classes (c){		
	}
	void show(){//显示学生信息
		cout<<name<<" "<<studnum<<" "<<gender<<" "<<age<<" "<<grade<<" "<<classes<<endl; 
	}
};

#endif

