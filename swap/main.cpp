#include<iostream>
#include<cstdlib>
using namespace std;
//void myswap(int& a,int& b){
//	int t;	t=a;	a=b;	b=t;
//}
//void myswap(float& a, float& b){
//	float t;	t=a;	a=b;	b=t;
//}
//void myswap(char& a,char& b){
//	char t;	t=a;	a=b;	b=t;
//}
//void myswap(string& a,string& b){
//	string t;	t=a;	a=b;	b=t;
//}
//string mymax(string& a, string& b){
//	if(a>b)return b;
//	else return a;
//}
//����ģ��
template<typename T>
void myswap(T& a, T& b){
	T t=a;a=b;b=t;
}
template<typename A>
A mymax(A& a,A& b){
	if(a>b)return a;
	else return b;
}
int main (int argc, char *argv[]) {
//	int a,b;
//	float a,b;
//	char a,b;
	string a,b;
	cin>>a>>b;
	cout<<"Before myswap :"<<a<<" "<<b<<endl;
	myswap(a,b);
	cout<<"After myswap :"<<a<<" "<<b<<endl;
	
	cout<<"max is :"<<mymax(a,b)<<endl;
	system("pause");
	return 0;
}
/*
�漰����֪ʶ�㣺
�������������أ�ǿ����
�ֵ���ASCII��
����ģ�壬ģ�庯��
*/
