#include<iostream>
#include<cstdlib>
using namespace std;

int main (int argc, char *argv[]) {
	int a;
	for(a=1;a<=10;a++){//7,8�д��룬����ѭ��0��
		cout<<"for:"<<a<<" ";
		if(a==5)
		goto DOWHILE;
	}
	
	a=1;
	while(a<=10){//10,11,12,13,14�д��룬����ѭ��0��
		DOWHILE:
		cout<<"while:"<<a<<" ";
		//continue;//����
		//break;//�ж�
		a=a+1;
		
	}
	
	a=1;
	do{
		cout<<"dowhile:"<<a<<" ";
		a=a+1;
	} while(a<=10);//16,17,18,19,20�д��룬����ѭ��1��
	int *p=nullptr;
	
	system("pause");
	return 0;
}
/*
for:����
while:������for�ȼ�
dowhile:����ִ��һ��ѭ����
continue:����������䣬����ѭ��
break:�ж�ѭ��
goto:����������־��λ��
*/
