#include "Star.h"
#include<ctime>
using namespace std;
Star::Star() {
	//cout<<"I am a star"<<endl;
}

Star::~Star() {
	
}

void Star::show(){
	int x=RandUnsignedInt(5,90);
	int y=RandUnsignedInt(2,30);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
	gotoxy(x,y);
	cout<<"*"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+3);
}

//返回从[min,max)之间的一个随机整型数
unsigned Star::RandUnsignedInt(const unsigned min, const unsigned max){
	unsigned i;
	time_t tx;	
	srand((unsigned) time(&tx));//srand函数是随机数发生器的初始化函数。参数为随机数种子
	Sleep(10);
	return min+(unsigned)(rand() % (max-min));//伪整型随机数发生器
}
