#include<iostream>
using namespace std;

//选择排序
class InsertionSort{
	int gl;//great less:gl==1升序，gl==2降序
	int *array;//动态数组*array, 静态数组array[5]
	int n;//数组长度
public:
	InsertionSort(int *arr, int n, int gl=1){
		this->array=arr;
		this->n=n;
		this->gl=gl;
		
		PrintSort();//1没有排序
		//2插入排序			
		for (int i=1 ; i< n; i++) //n-1趟排序
		{
			if(arr[i] < arr[i-1]){ //若第i个元素大于i-1元素，直接插入。小于的话，移动有序表后插入  
				int j= i-1;   
				int x = arr[i];       //复制为哨兵，即存储待排序元素  
				arr[i] = arr[i-1];   //先后移一个元素  
				while(x < arr[j]){  //查找在有序表的插入位置  
					arr[j+1] = arr[j];  
					j--;         //元素后移  
				}  
				arr[j+1] = x;      //插入到正确位置  
			}  
			cout<<i<<" 趟： ";//打印每趟排序的结果
			PrintSort();
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
	int a[]={44,70,56,32,120};//5个数
	InsertionSort is(a,sizeof(a)/sizeof(int),2);
	return 0;
}

/*
44 70 56 32 120
1 趟： 44 70 56 32 120
2 趟： 44 56 70 32 120
3 趟： 32 44 56 70 120
4 趟： 32 44 56 70 120
32 44 56 70 120
*/
