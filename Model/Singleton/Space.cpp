#include "Space.h"
using namespace std;

Space* Space::m_pSpace = nullptr;

Space::Space(Sun s, Moon m, Star *ss):sun(s),moon(m),stars(ss) {
	
}

Space::~Space() {
//	delete sun;
//	delete moon;
	delete []stars;
}
void Space::show(){
	system("mode con:cols=110 lines=40"); 
	HANDLE consolehwnd=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(consolehwnd,BACKGROUND_INTENSITY|BACKGROUND_BLUE);
	gotoxy(2,2);
	cout<<"SPACE"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+3);
	sun.show();
	moon.show();
	for(int i=0;i<NSTAR;i++)
		stars->show();
}
