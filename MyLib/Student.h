#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstdlib>
#include"Person.h"

using namespace std;

class Student : public Person{
	
private:
	string name;//����
	string studnum;//ѧ��
	char gender;//�Ա�
	unsigned age;//����
	string grade;//�꼶
	string classes;//�༶	
public:
	Student();//Ĭ���޲ι��캯��
	~Student();//��������
	Student(string n,string s,char g,unsigned a,string gr,string c):
		name(n),studnum(s),gender (g),age (a),grade(gr),classes (c){		
	}
	void show(){//��ʾѧ����Ϣ
		cout<<name<<" "<<studnum<<" "<<gender<<" "<<age<<" "<<grade<<" "<<classes<<endl; 
	}
};

#endif

