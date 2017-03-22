#ifndef GOLDBACH_H
#define GOLDBACH_H
#include<iostream>
#include<cstdlib>

using namespace std;

class Goldbach {
private:
	long long even;//输入大于2的偶数even，列出1+2,
	long long maxeven;//任一大的偶数maxeven
public:
	Goldbach(int e,int m);//哥德巴赫偶数
	bool isPrime(int n);//判断素数
	void GoldbachValid();//验证even:1+2
	void GoldbachEnum();//验证maxeven以内的偶数满足1+2
};

#endif

