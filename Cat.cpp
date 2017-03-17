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
	string color;//ÑÕÉ«
	int legs;//ÍÈ
private:
	int age;//ÄêÁä
	string gender;//´ÆĞÛ
public:
	Cat(string c, int l, int a, string g){//¹¹Ôìº¯Êı
		color=c;legs=l;age=a;gender=g;
	}
	void print(){
		cout<<color<<"¡¡"<<legs<<"¡¡"<<age<<"¡¡"<<gender<<endl;
	}
	void move(){//ÒÆ¶
		cout<<"Ã¨²½"<<endl;
	}
	void sound(){//½ĞÉ
		cout<<"ß÷ß÷"<<endl;
	}
};

class Dog : public Animal{
public:
	string color;//ÑÕÉ«
	int legs;//ÍÈ
private:
	int age;//ÄêÁä
	string gender;//´ÆĞÛ
public:
	Dog(string c, int l, int a, string g){//¹¹Ôìº¯Êı
		color=c;legs=l;age=a;gender=g;
	}
	void print(){
		cout<<color<<"¡¡"<<legs<<"¡¡"<<age<<"¡¡"<<gender<<endl;
	}
	void move(){//ÒÆ¶
		cout<<"¹·ÅÙ"<<endl;
	}
	void sound(){//½ĞÉ
		cout<<"ÍôÍô"<<endl;
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
		cout<<"ÅÀĞĞ"<<endl;
	}	
	void sound(){
		cout<<"Ö¨Ö¨"<<endl;
	}
};
int main(){
	Animal *an;
	Cat Cat1("ºÚÉ«",4,13,"¹«");
	an=&Cat1;
	an->print();
	an->move();
	an->sound();
	Dog Dog1("°×É«",4,13,"Ä¸");
	an=&Dog1;
	(*an).print();
	(*an).move();
	(*an).sound();
	Mouse Mouse1("»ÒÉ«",4,4,"¹«");
	an=&Mouse1;
	(*an).print();
	an->move();
	(*an).sound();
	system("pause");
	return 0;
}
