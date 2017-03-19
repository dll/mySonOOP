#include<iostream>
#include<cstdlib>
using namespace std;

class DivideByZero {};	// 定义一个空类，0除错误
class OperationTypeNoExist {};// 定义一个空类，操作类型不存在

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
	try{
		if(operat=='+')
			return operand1+operand2;
		else if(operat=='-')
			return operand1-operand2;
		else if(operat=='*')
			return operand1*operand2;
		else if(operat=='/'){
			if(operand2==0)
				throw DivideByZero();
			return operand1/operand2;
		}
		else
			throw OperationTypeNoExist();// 抛掷无操作类型异常	
	}
	catch(DivideByZero){
		throw;
	}
	catch(OperationTypeNoExist){
		throw;
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
	char op='=';
	cout<<"请输入被操作数，操作符，操作数"<<endl;
	cin>>d1>>op>>d2;
	double temp;
	while(op!='='){
		
		Calculator ca1(d1,op,d2);
		try{
			temp=ca1.Calculate();
			cout<<temp<<endl;
		}
		catch(DivideByZero){
			cout<<"除数不能为零！"<<endl;
			system("pause");
			exit(0);
		}
		catch(OperationTypeNoExist){
			cout<<"操作符错误，不能计算！"<<endl;
			system("pause");
			exit(0);
		}
		cout<<"请输入操作符，操作数"<<endl;
		cin>>op>>d2;
		d1=temp;
	}
		
	return 0;
}

