#include<iostream>
#include<cstdlib>
using namespace std;

int main (int argc, char *argv[]) {
	int a;
	for(a=1;a<=10;a++){//7,8行代码，至少循环0次
		cout<<"for:"<<a<<" ";
		if(a==5)
		goto DOWHILE;
	}
	
	a=1;
	while(a<=10){//10,11,12,13,14行代码，至少循环0次
		DOWHILE:
		cout<<"while:"<<a<<" ";
		//continue;//继续
		//break;//中断
		a=a+1;
		
	}
	
	a=1;
	do{
		cout<<"dowhile:"<<a<<" ";
		a=a+1;
	} while(a<=10);//16,17,18,19,20行代码，至少循环1次
	int *p=nullptr;
	
	system("pause");
	return 0;
}
/*
for:最简洁
while:功能与for等价
dowhile:至少执行一次循环体
continue:跳过下面语句，继续循环
break:中断循环
goto:可以跳到标志的位置
*/
