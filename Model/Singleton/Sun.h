#ifndef Sun_H
#define Sun_H
#include<iostream>
#include "Thing.h"

//ѧϰ����ģʽ
class Sun : public Thing {//̫��
private:
	static Sun * m_pSun;  //Sun
protected:
public:
	Sun();
	~Sun();
	static Sun * GetSun(){  
		if(nullptr == m_pSun)  //�ж��Ƿ��һ�ε���  
			m_pSun = new Sun();  
		return m_pSun;  
	}  
	void show();
};

#endif

