#ifndef Sun_H
#define Sun_H
#include<iostream>
//ѧϰ����ģʽ
class Sun {//̫��
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
};

#endif

