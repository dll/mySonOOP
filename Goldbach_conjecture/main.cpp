//��°ͺղ��룺��һ����2��ż�������ɱ�ʾ����������֮�͡�
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

bool isPrime(int n){
	bool flag=true;
	for(int j=2;j<n/2;j++){
		if(n%j==0){
			flag=false;
			return(flag);
		}
	}
	return(flag);
}
void GoldbachConjectureExhaustive(int MaxEven){
	int n=4;
	while(n<=MaxEven){
		for(int i=3;i<=n;i++){
			if(isPrime(i)){
				if(isPrime(n-i)){
					cout<<n<<"="<<i<<"+"<<n-i<<endl; 
				}
			}
		}
		n=n+2;
	}
}
bool GoldbachConjectureValid(){
	int i,n;
	cout<<"��������С��2��ż����"<<endl;
	cin>>n;
	while(n<4||n%2!=0){
		cout<<"�����벻С��2��ż����"<<endl;
		cin>>n;  
	} 
	for(i=3;i<n;i++){
		if(isPrime(i)){
			if(isPrime(n-i)){
				cout<<n<<"="<<i<<"+"<<n-i<<endl; 
			}
		}
	}
}
int main(){
	
	GoldbachConjectureValid();
	system("pause");
	system("cls");
//	GoldbachConjectureExhaustive(10);
	
	return 0;
}
