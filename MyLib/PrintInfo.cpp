#include <typeinfo>
#include "PrintInfo.h"
#include"Student.h"
#include"Teacher.h"

PrintInfo::PrintInfo() {
	
}

PrintInfo::~PrintInfo() {
	
}

void PrintInfo::show(Person &p){
	//p.show();
	if(typeid(Student)==typeid (p)){
		Student &s=dynamic_cast<Student&>(p);
		s.show();
	}
	if(typeid(Teacher)==typeid (p)){
		Teacher &t=dynamic_cast<Teacher&>(p);
		t.show();
	}
}

