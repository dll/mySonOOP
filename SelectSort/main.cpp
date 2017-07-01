#include<iostream>
using namespace std;

//ѡ������
class SelectSort{
	int gl;//great less:gl==1����gl==2����
	int *array;//��̬����*array, ��̬����array[5]
	int n;//���鳤��
public:
	SelectSort(int *arr, int n, int gl=1){
		this->array=arr;
		this->n=n;
		this->gl=gl;
		
		PrintSort();//1û������
		
		//2ѡ������			
		for (int i=0 ; i< n-1 ; i++) //n-1������
		{
			int index=i; //����index����Ӧ������Ԫ������С�Ļ�������
			for(int j=i+1; j<n; j++){//������С��¼��λ��
				if(gl==1&&arr[j]<arr[index])//����
					index=j;//��С
				if(gl==2&&arr[j]>arr[index])//����
					index=j;//���
			}
			//����������һ��Ԫ�ز�������������С�����Ԫ�أ�����н���
			if ( index!=i) 
				swap(arr[index],arr[i]);
			
			cout<<i+1<<" �ˣ� ";PrintSort();
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
	int a[]={120,70,56,32,44};//5����
	SelectSort ss(a,sizeof(a)/sizeof(int),1);
	return 0;
}

/*
120 70 56 32 44
1 �ˣ� 32 70 56 120 44
2 �ˣ� 32 44 56 120 70
3 �ˣ� 32 44 56 120 70
4 �ˣ� 32 44 56 70 120
32 44 56 70 120
*/
