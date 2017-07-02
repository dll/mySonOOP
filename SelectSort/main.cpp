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
		for (int i=0 ; i< (n-1)/2 ; i++) //n-1������
		{
			int j,imin=i, imax=i; //����index����Ӧ������Ԫ������С�Ļ�������
			for(j=i+1; j<n-i; j++){//������С��¼��λ��
				if(arr[j]>arr[imax]){
					imax=j;//���
					continue;
				}
				if(arr[j]<arr[imin])
					imin=j;//��С
			}
			//����������һ��Ԫ�ز�������������С�����Ԫ�أ�����н���
			if(gl==1){//����
				if ( imin!=i) 
					swap(arr[imin],arr[i]);
				if(imax==i)
					swap(arr[imin],arr[n-i-1]);
				if(imax!=n-i-1&&imax!=i)
					swap(arr[imax],arr[n-i-1]);
			}
			if(gl==2){//����
				if ( imin!=n-i-1) 
					swap(arr[imin],arr[n-i-1]);
				if(imax==n-i-1)
					swap(arr[i],arr[imin]);
				if(imax!=i&&imax!=n-i-1)
					swap(arr[imax],arr[i]);
			}
			
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
	int a[]={44,70,56,32,120};//5����
	SelectSort ss(a,sizeof(a)/sizeof(int),2);
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
