#ifndef SPACE_H
#define SPACE_H
#include"Sun.h"
#include"Moon.h"
#include"Star.h"
#include "Thing.h"
const unsigned NSTAR=1000;

class Space : public Thing{
private:
	static Space * m_pSpace;
	Sun sun;
	Moon moon;
//	Earth earth;
	Star *stars;
protected:
public:
	Space(){}
	Space(Sun,Moon,Star*);
	~Space();
	void show();
	void setSun(Sun*s){sun=*s;}
	Sun getSun(){return sun;}
	void setMoon(Moon*m){moon=*m;}
	Moon getMoon(){return moon;}
	void setStars(Star *s){stars=s;}
	Star * getStars(){return stars;}
	
	static Space * GetSpace(){  
		if(nullptr == m_pSpace) 
			m_pSpace = new Space();  
		return m_pSpace;  
	} 
};

#endif

