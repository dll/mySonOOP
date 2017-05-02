#ifndef Sun_H
#define Sun_H
#include<iostream>
#include "Thing.h"

//学习单例模式
class Sun : public Thing {//太阳
private:
	static Sun * m_pSun;  //Sun
protected:
public:
	Sun();
	~Sun();
	static Sun * GetSun(){  
		if(nullptr == m_pSun)  //判断是否第一次调用  
			m_pSun = new Sun();  
		return m_pSun;  
	}  
	void show();
};

#endif

