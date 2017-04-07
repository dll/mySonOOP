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
//			cout<<" 优秀"<<endl;
//		else if(grade<=90&&grade>80)
//			cout<<"良好"<<endl;
//		else if(grade<=80&&grade>70)
//			cout<<"中等"<<endl;
//		else if(grade<=70&&grade>=60)
//			cout<<"及格"<<endl;
//		else if(grade<60&&grade>=0)
//			cout<<"不及格"<<endl;
//		else
//			cout<<"未知等级"<<endl;
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
				cout<<" 优秀"<<endl;
				break;
			case 'b':
				cout<<"良好"<<endl;
				break;
			case 'c':
				cout<<"中等"<<endl;
				break;
			case 'd':
				cout<<"及格"<<endl;
				break;
			case 'e':
				cout<<"不及格"<<endl;
				break;
			case 'f':
				cout<<"未知等级"<<endl;
				break;
			default:
					cout<<"错误"<<endl;
		}
	}
	return 0;
}

