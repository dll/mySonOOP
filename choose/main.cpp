#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//	bool weather=true;//true==1,false==0
//	while(cin>>weather){
//		if(weather){
//			cout<<"play basketball"<<endl;
//			cout<<"eat at canteen"<<endl;
//		}
//		else
//			cout<<"at home"<<endl;
//	}
//	int grade=90;
//	while(cin>>grade){
//		if(grade>90&&grade<=100)
//			cout<<" ����"<<endl;
//		else if(grade<=90&&grade>80)
//			cout<<"����"<<endl;
//		else if(grade<=80&&grade>70)
//			cout<<"�е�"<<endl;
//		else if(grade<=70&&grade>=60)
//			cout<<"����"<<endl;
//		else if(grade<60&&grade>=0)
//			cout<<"������"<<endl;
//		else
//			cout<<"δ֪�ȼ�"<<endl;
//	}
//	
	int grade,g;
	while(cin>>grade){
			
			if(grade>90&&grade<=100)
				g='a';
			else if(grade<=90&&grade>80)
				g='b';
			else if(grade<=80&&grade>70)
				g='c';
			else if(grade<=70&&grade>=60)
				g='d';
			else if(grade<60&&grade>=0)
				g='e';
			else
				g='f';
		switch(g){
			case 'a':
				cout<<" ����"<<endl;
				break;
			case 'b':
				cout<<"����"<<endl;
				break;
			case 'c':
				cout<<"�е�"<<endl;
				break;
			case 'd':
				cout<<"����"<<endl;
				break;
			case 'e':
				cout<<"������"<<endl;
				break;
			case 'f':
				cout<<"δ֪�ȼ�"<<endl;
				break;
			default:
					cout<<"����"<<endl;
		}
	}
	return 0;
}

