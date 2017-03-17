#include<iostream>
#include<cstdlib>
using namespace std;
class Animal{
public:
	virtual void print()=0;
	virtual void move()=0;
	virtual void sound()=0;
};

class Cat : public Animal{
public:
	string color;//��ɫ
	int legs;//��
private:
	int age;//����
	string gender;//����
public:
	Cat(string c, int l, int a, string g){//���캯��
		color=c;legs=l;age=a;gender=g;
	}
	void print(){
		cout<<color<<"��"<<legs<<"��"<<age<<"��"<<gender<<endl;
	}
	void move(){//�ƶ
		cout<<"è��"<<endl;
	}
	void sound(){//���
		cout<<"����"<<endl;
	}
};

class Dog : public Animal{
public:
	string color;//��ɫ
	int legs;//��
private:
	int age;//����
	string gender;//����
public:
	Dog(string c, int l, int a, string g){//���캯��
		color=c;legs=l;age=a;gender=g;
	}
	void print(){
		cout<<color<<"��"<<legs<<"��"<<age<<"��"<<gender<<endl;
	}
	void move(){//�ƶ
		cout<<"����"<<endl;
	}
	void sound(){//���
		cout<<"����"<<endl;
	}
};
class Mouse : public Animal{
	public:
		string color;
		int legs;
	private:
		int age;
		string gender;
	public:
		Mouse(string c,int l,int a,string g){
	color=c;legs=l;age=a;gender=g;		
	}
	void print(){
			cout<<color<<" "<<legs<<" "<<age<<" "<<gender<<endl;
		}
	void move(){
		cout<<"����"<<endl;
	}	
	void sound(){
		cout<<"֨֨"<<endl;
	}
};
int main(){
	Animal *an;
	Cat Cat1("��ɫ",4,13,"��");
	an=&Cat1;
	an->print();
	an->move();
	an->sound();
	Dog Dog1("��ɫ",4,13,"ĸ");
	an=&Dog1;
	(*an).print();
	(*an).move();
	(*an).sound();
	Mouse Mouse1("��ɫ",4,4,"��");
	an=&Mouse1;
	(*an).print();
	an->move();
	(*an).sound();
	system("pause");
	return 0;
}
