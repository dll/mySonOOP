#include<iostream>
#include"Sun.h"
#include"Moon.h"
#include "Star.h"

using namespace std;

int main (int argc, char *argv[]) {
	
	Sun *s1=Sun::GetSun();//s1Ì«Ñô0xc85ee8
	Sun *s2=Sun::GetSun();//s2Ì«Ñô0xc85ee8
	Sun *s3=Sun::GetSun();//s3Ì«Ñô0xc85ee8
	if(s1==s2 && s2==s3)
		cout<<"Only one Sun"<<endl;
	
	Moon *m1=Moon::GetMoon();
	Moon *m2=Moon::GetMoon();
	if(m1==m2)
		cout<<"Only one Moon"<<endl;
	
	Star *Star1=new Star();//0x775f08
	Star *Star2=new Star();//0x775f18
	if(Star1!=Star2)
		cout<<"Many Stars"<<endl;
	
	return 0;
}

/*
I am a Sun...
Only one Sun
I am a Moon
Only one Moon
I am a star
I am a star
Many Stars

*/
