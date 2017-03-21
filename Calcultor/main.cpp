#include<iostream>
#include<cstdlib>
#include <typeinfo>
#include<cstring>

using namespace std;

class DivideByZero {};	// ����һ�����࣬0������
class OperationTypeNoExist {};// ����һ�����࣬�������Ͳ�����

class Calculator{
	double operand1,operand2;
	char operat;
	static double result;
public:
	Calculator(double op1,char oper,double op2){
		operand1=op1;operand2=op2;operat=oper;
		result=operand1;
	}
	Calculator(char oper,double op2){
		operand2=op2;operat=oper;
	}
	double Calculate();	
};
double Calculator::result=0;

double Calculator::Calculate(){
	operand1 = result;
	try{
		if(operat=='+')
			return result = operand1+operand2;
		else if(operat=='-')
			return result = operand1-operand2;
		else if(operat=='*')
			return result = operand1*operand2;
		else if(operat=='/'){
			if(operand2==0)
				throw DivideByZero();
			return result = operand1/operand2;
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
	double d1,d2,temp;
	char op='=';
	try{
		cout<<"�����뱻����������������������"<<endl;
		cin>>d1>>op>>d2;
		while(cin.fail()){
			cout<<"�����������ʹ���\n���������뱻����������������������"<<endl;
			cin.clear();
			cin.ignore(1024,'\n');
			cin>>d1>>op>>d2;
		}
		Calculator ca1(d1,op,d2);
		temp=ca1.Calculate();
		cout<<"�˴μ�����Ϊ: "<<temp<<endl;
		
		while(cout<<"��������һ��������: ",cin>>op,op!='='){
			cout<<"��������һ��������: ";
			cin>>d2;
			while(cin.fail()){
				cout<<"�����������ʹ���\n���������������"<<endl;
				cin.clear();
				cin.ignore(1024,'\n');
				cin>>d2;
			}
			Calculator ca1(op,d2);
			temp=ca1.Calculate();
			cout<<"�˴μ�����Ϊ: "<<temp<<endl;
		}
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
	cout<<"���ռ�����Ϊ: "<<temp<<endl;
	system("pause");
		
	return 0;
}

/*
�����뱻����������������������
2*u
�����������ʹ���
���������뱻����������������������
2*3
�˴μ�����Ϊ: 6
��������һ��������: *
��������һ��������: 4
�˴μ�����Ϊ: 24
��������һ��������: *
��������һ��������: e
�����������ʹ���
���������������
2
�˴μ�����Ϊ: 48
��������һ��������: /
��������һ��������: 6
�˴μ�����Ϊ: 8
��������һ��������: -
��������һ��������: @
�����������ʹ���
���������������
1
�˴μ�����Ϊ: 7
��������һ��������: =
���ռ�����Ϊ: 7
�밴���������. . .
*/
