#include<iostream>
#include<cstdlib>
#include <typeinfo>
#include<cstring>

using namespace std;

class DivideByZero {};	// 定义一个空类，0除错误
class OperationTypeNoExist {};// 定义一个空类，操作类型不存在

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
	double d1,d2,temp;
	char op='=';
	try{
		cout<<"请输入被操作数，操作符，操作数"<<endl;
		cin>>d1>>op>>d2;
		while(cin.fail()){
			cout<<"输入数据类型错误！\n请重新输入被操作数，操作符，操作数"<<endl;
			cin.clear();
			cin.ignore(1024,'\n');
			cin>>d1>>op>>d2;
		}
		Calculator ca1(d1,op,d2);
		temp=ca1.Calculate();
		cout<<"此次计算结果为: "<<temp<<endl;
		
		while(cout<<"请输入下一个操作符: ",cin>>op,op!='='){
			cout<<"请输入下一个操作数: ";
			cin>>d2;
			while(cin.fail()){
				cout<<"输入数据类型错误！\n请重新输入操作数"<<endl;
				cin.clear();
				cin.ignore(1024,'\n');
				cin>>d2;
			}
			Calculator ca1(op,d2);
			temp=ca1.Calculate();
			cout<<"此次计算结果为: "<<temp<<endl;
		}
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
	cout<<"最终计算结果为: "<<temp<<endl;
	system("pause");
		
	return 0;
}

/*
请输入被操作数，操作符，操作数
2*u
输入数据类型错误！
请重新输入被操作数，操作符，操作数
2*3
此次计算结果为: 6
请输入下一个操作符: *
请输入下一个操作数: 4
此次计算结果为: 24
请输入下一个操作符: *
请输入下一个操作数: e
输入数据类型错误！
请重新输入操作数
2
此次计算结果为: 48
请输入下一个操作符: /
请输入下一个操作数: 6
此次计算结果为: 8
请输入下一个操作符: -
请输入下一个操作数: @
输入数据类型错误！
请重新输入操作数
1
此次计算结果为: 7
请输入下一个操作符: =
最终计算结果为: 7
请按任意键继续. . .
*/
