#ifndef MOON_H
#define MOON_H
#include<iostream>
#include "Thing.h"
class Moon : public Thing{
private:
	static Moon * m_pMoon;
protected:
public:
	Moon();
	~Moon();
	static Moon * GetMoon(){
		if(nullptr == m_pMoon)
			m_pMoon = new Moon;
		return m_pMoon;
	}
	void show();
};

#endif

