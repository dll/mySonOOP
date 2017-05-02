#include "Sun.h"

using namespace std;

Sun* Sun::m_pSun = nullptr;

Sun::Sun() {
	//cout<< "I am a Sun" << endl;
}

Sun::~Sun() {
//	delete m_pSun;
//	m_pSun = nullptr;
//	cout<< "Destroy..." << endl;
}

void Sun::show(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	gotoxy(45,15);
	cout<<"@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+3);
}
