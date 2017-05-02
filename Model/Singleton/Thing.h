#ifndef THING_H
#define THING_H
#include<cstdio>
#include<windows.h>  

class Thing {
private:
protected:
public:
	Thing();
	~Thing();
	virtual void show()=0;
	void gotoxy(int x,int y){  
		COORD pos={(short)x,(short)y}; 
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);  
	} 
};

#endif
