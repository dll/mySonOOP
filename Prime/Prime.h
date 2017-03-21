#ifndef PRIME_H
#define PRIME_H
#include<iostream>
#include<cstdlib>
#include<iomanip>
const int MAXCOUNT=256;

class Prime {
private:
	int lower,upper,count;//下限,上限，个数
	int sArray[MAXCOUNT]={0};//保存素数
	int *dArray=NULL;
protected:
public:
	Prime(int, int);//构造函数
	~Prime();//析构函数
	bool isPrime(int n);//判断n是否为素数
	void printPrime();//打印素数
	void generatePrime();//生成区间的所有素数
};

#endif

