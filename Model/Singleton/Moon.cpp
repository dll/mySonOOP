#include "Moon.h"
using namespace std;
Moon * Moon::m_pMoon = nullptr;
Moon::Moon() {
	//cout<<"I am a Moon"<<endl;
}

Moon::~Moon() {
	
}

void Moon::show(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+3);
	gotoxy(60,6);
	cout<<"&"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+3);
}
