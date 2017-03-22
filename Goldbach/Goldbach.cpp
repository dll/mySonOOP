#include "Goldbach.h"

Goldbach::Goldbach(int e,int m) {
	if(e<=2||e%2!=0|| m<=2||m%2!=0){
		cout<<"������һ������2��ż��"<<endl;
		system("pause");
		exit(0);
	}		
	even=e;maxeven=m;
}
bool Goldbach::isPrime(int n){
	bool flag=true;
	for(long long i=2;i<n;i++)
		if(n%i==0)
		flag=false;
	return flag;
}
void Goldbach::GoldbachValid(){
	cout<<"��֤"<<even<<"����1+2"<<endl;
	for(long long i=3;i<even;i++){
		if(isPrime(i)){
			if(isPrime(even-i)){
				cout<<even<<"="<<i<<"+"<<even-i<<endl; 
				break;
			}
		}
	}
}
void Goldbach::GoldbachEnum(){
	long n=4;
	cout<<"��֤С��"<<maxeven<<"��ż��������1+2"<<endl;
	while(n<=maxeven){
		for(long i=3;i<=n/2;i++){
			if(isPrime(i)){
				if(isPrime(n-i)){
					cout<<n<<"="<<i<<"+"<<n-i<<endl; 
					break;
				}
			}
		}
		n=n+2;
	}
}
