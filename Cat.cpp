#include<iostream>
#include<cstdlib>
using namespace std;
class Cat{
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

class Dog{
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

int main(){
	Cat Cat1("��ɫ",4,13,"��");
	Cat1.print();
	Cat1.move();
	Cat1.sound();
	Dog Dog1("��ɫ",4,13,"ĸ");
	Dog1.print();
	Dog1.move();
	Dog1.sound();
	system("pause");
	return 0;
}
