#include<iostream>
using namespace std;

//ѡ������
class InsertionSort{
	int gl;//great less:gl==1����gl==2����
	int *array;//��̬����*array, ��̬����array[5]
	int n;//���鳤��
public:
	InsertionSort(int *arr, int n, int gl=1){
		this->array=arr;
		this->n=n;
		this->gl=gl;
		
		PrintSort();//1û������
		//2��������			
		for (int i=1 ; i< n; i++) //n-1������
		{
			if(arr[i] < arr[i-1]){ //����i��Ԫ�ش���i-1Ԫ�أ�ֱ�Ӳ��롣С�ڵĻ����ƶ����������  
				int j= i-1;   
				int x = arr[i];       //����Ϊ�ڱ������洢������Ԫ��  
				arr[i] = arr[i-1];   //�Ⱥ���һ��Ԫ��  
				while(x < arr[j]){  //�����������Ĳ���λ��  
					arr[j+1] = arr[j];  
					j--;         //Ԫ�غ���  
				}  
				arr[j+1] = x;      //���뵽��ȷλ��  
			}  
			cout<<i<<" �ˣ� ";//��ӡÿ������Ľ��
			PrintSort();
		}
		PrintSort();//3������
	}
	void PrintSort(){
		for(int i=0;i<n;i++){
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
};


int main (int argc, char *argv[]) {
	int a[]={44,70,56,32,120};//5����
	InsertionSort is(a,sizeof(a)/sizeof(int),2);
	return 0;
}

/*
44 70 56 32 120
1 �ˣ� 44 70 56 32 120
2 �ˣ� 44 56 70 32 120
3 �ˣ� 32 44 56 70 120
4 �ˣ� 32 44 56 70 120
32 44 56 70 120
*/
