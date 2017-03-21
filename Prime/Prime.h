#ifndef PRIME_H
#define PRIME_H
#include<iostream>
#include<cstdlib>
#include<iomanip>
const int MAXCOUNT=256;

class Prime {
private:
	int lower,upper,count;//����,���ޣ�����
	int sArray[MAXCOUNT]={0};//��������
	int *dArray=NULL;
protected:
public:
	Prime(int, int);//���캯��
	~Prime();//��������
	bool isPrime(int n);//�ж�n�Ƿ�Ϊ����
	void printPrime();//��ӡ����
	void generatePrime();//�����������������
};

#endif

