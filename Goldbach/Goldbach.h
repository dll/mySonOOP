#ifndef GOLDBACH_H
#define GOLDBACH_H
#include<iostream>
#include<cstdlib>

using namespace std;

class Goldbach {
private:
	long long even;//�������2��ż��even���г�1+2,
	long long maxeven;//��һ���ż��maxeven
public:
	Goldbach(int e,int m);//��°ͺ�ż��
	bool isPrime(int n);//�ж�����
	void GoldbachValid();//��֤even:1+2
	void GoldbachEnum();//��֤maxeven���ڵ�ż������1+2
};

#endif

