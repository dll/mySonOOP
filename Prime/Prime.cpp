#include "Prime.h"
using namespace std;

Prime::Prime(int low, int up):lower(low),upper(up) {
	count=0;
	dArray=new int[upper-lower];	
	generatePrime();
}

Prime::~Prime() {
	delete [] dArray;
}

bool Prime::isPrime(int n){
	int i;
	if(n<=1)return false;
	for(i=2;i<n;i++){//2,3,4,,,n-1
		if(n%i==0)
			return false;
	}
	if(i==n)//i=n 
		return true;
}
void Prime::printPrime(){
	cout<<lower<<"---"<<upper<<" "<<count<<" 素数："<<endl;
	if(count<=MAXCOUNT){
		cout<<"静态数组保存素数"<<endl;
		for(int i=0; i<count;i++)
			cout<<setw(3)<<sArray[i]<<" ";
		cout<<endl;
	}else{
		cout<<"动态数组保存素数"<<endl;
		for(int i=0; i<count;i++)
			cout<<setw(4)<<dArray[i]<<" ";
		cout<<endl;
	}
}

void Prime::generatePrime(){
	for(int i=lower;i<=upper;i++){
		if(isPrime(i))
			sArray[count++]=i;
		if(count==MAXCOUNT){
			cout<<"超过256"<<endl;
			goto DARRAY;//goto语句，DARRAY
		}
	}
	DARRAY:
	count=0;
	for(int i=lower;i<=upper;i++){
		if(isPrime(i))
			dArray[count++]=i;
	}
}
