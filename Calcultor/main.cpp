#include<iostream>
#include<cstdlib>
using namespace std;
class Calculator{
	double operand1,operand2;
	char operat;
public:
	Calculator(double op1,char oper,double op2){
		operand1=op1;operand2=op2;operat=oper;
	}
	double Calculate();	
};
double Calculator::Calculate(){
	if(operat=='+')
		return operand1+operand2;
	else if(operat=='-')
		return operand1-operand2;
	else if(operat=='*')
		return operand1*operand2;
	else if(operat=='/'){
		if(operand2==0){
			cout<<"除数不能为零，请重输"<<endl;
			system("pause");
			exit(0);
		}
		return operand1/operand2;
	}
	else {
		cout<<"操作符错误"<<endl;
		system("pause");
		exit(0);
	}
}
		
int main (int argc, char *argv[]) {
	/*Calculator ca1(2.5,'+',1);
	cout<<ca1.Calculate()<<endl;
	Calculator ca2(2.5,'-',1);
	cout<<ca2.Calculate()<<endl;
	Calculator ca3(2.5,'*',1);
	cout<<ca3.Calculate()<<endl;
	Calculator ca4(2.5,'/',1);
	cout<<ca4.Calculate()<<endl;*/
	double d1,d2;
	char op;
	cin>>d1>>op>>d2;
	Calculator ca1(d1,op,d2);
	cout<<ca1.Calculate()<<endl;
		
	return 0;
}

