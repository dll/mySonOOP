#include<iostream>
#include<cstdlib>
using namespace std;

class DivideByZero {};	// ����һ�����࣬0������
class OperationTypeNoExist {};// ����һ�����࣬�������Ͳ�����

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
			throw OperationTypeNoExist();// �����޲��������쳣	
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
	cout<<"�����뱻����������������������"<<endl;
	cin>>d1>>op>>d2;
	double temp;
	while(op!='='){
		
		Calculator ca1(d1,op,d2);
		try{
			temp=ca1.Calculate();
			cout<<temp<<endl;
		}
		catch(DivideByZero){
			cout<<"��������Ϊ�㣡"<<endl;
			system("pause");
			exit(0);
		}
		catch(OperationTypeNoExist){
			cout<<"���������󣬲��ܼ��㣡"<<endl;
			system("pause");
			exit(0);
		}
		cout<<"�������������������"<<endl;
		cin>>op>>d2;
		d1=temp;
	}
		
	return 0;
}

