#include<iostream>
using namespace std;

//选择排序
class SelectSort{
	int gl;//great less:gl==1升序，gl==2降序
	int *array;//动态数组*array, 静态数组array[5]
	int n;//数组长度
public:
	SelectSort(int *arr, int n, int gl=1){
		this->array=arr;
		this->n=n;
		this->gl=gl;
		
		PrintSort();//1没有排序
		
		//2选择排序			
		for (int i=0 ; i< n-1 ; i++) //n-1趟排序
		{
			int index=i; //假设index处对应的数组元素是最小的或者最大的
			for(int j=i+1; j<n; j++){//查找最小记录的位置
				if(gl==1&&arr[j]<arr[index])//升序
					index=j;//最小
				if(gl==2&&arr[j]>arr[index])//降序
					index=j;//最大
			}
			//若无序区第一个元素不是无序区中最小或最大元素，则进行交换
			if ( index!=i) 
				swap(arr[index],arr[i]);
			
			cout<<i+1<<" 趟： ";PrintSort();
		}
		PrintSort();//3排序结果
	}
	void PrintSort(){
		for(int i=0;i<n;i++){
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
};


int main (int argc, char *argv[]) {
	int a[]={120,70,56,32,44};//5个数
	SelectSort ss(a,sizeof(a)/sizeof(int),1);
	return 0;
}

/*
120 70 56 32 44
1 趟： 32 70 56 120 44
2 趟： 32 44 56 120 70
3 趟： 32 44 56 120 70
4 趟： 32 44 56 70 120
32 44 56 70 120
*/
