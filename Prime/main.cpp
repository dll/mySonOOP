#include"Prime.h"


using namespace std;

int main (int argc, char *argv[]) {
	int a,b;
	cin>>a>>b;
	if(a>b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	Prime p(a,b);
	p.printPrime();
	
	return 0;
}

