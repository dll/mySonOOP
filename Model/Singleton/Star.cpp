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

//���ش�[min,max)֮���һ�����������
unsigned Star::RandUnsignedInt(const unsigned min, const unsigned max){
	unsigned i;
	time_t tx;	
	srand((unsigned) time(&tx));//srand������������������ĳ�ʼ������������Ϊ���������
	Sleep(10);
	return min+(unsigned)(rand() % (max-min));//α���������������
}
