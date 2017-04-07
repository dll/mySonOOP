#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
#include<cstdlib>
#include"Person.h"

using namespace std;

class Teacher : public Person{
private:
	string name;
	string teahnum;
	unsigned age;
	char gender;
public:
	Teacher();
	~Teacher();
	Teacher(string n, string t, unsigned a, char g):\
		name(n),teahnum(t),age(a),gender(g){}
	void show();
};

#endif

