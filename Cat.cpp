#include<iostream>
#include<cstdlib>
using namespace std;
class Cat{
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

class Dog{
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

int main(){
	Cat Cat1("ºÚÉ«",4,13,"¹«");
	Cat1.print();
	Cat1.move();
	Cat1.sound();
	Dog Dog1("°×É«",4,13,"Ä¸");
	Dog1.print();
	Dog1.move();
	Dog1.sound();
	system("pause");
	return 0;
}
