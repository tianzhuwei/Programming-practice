/*
Q:假设有一个数组，里面有10个元素 int a[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}。请写一个算法，得到a数组的一个随机排列。要求时间复杂度尽量小，可以使用random函数。例如输出的随机序列可以是：3 6 2 4 5 1 9 8 0


A:
	这是一个不错的问题，设一共有 n 个数，第一次我们随机产生一个 0～n-1 范围内的数，然后以这个数做为下标，与数组最后一个元素进行交换，然后再产生一个 0～n-2 范围内的数 ，依次进行，直至到下标为0时程序结束，时间复杂度我们保证在O(n)内
 
 */
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
#define num 10
void swap(int &a,int&b){
	int te=a;
	a=b;
	b=te;
}
int main(){

	int arr[num]={0};
	for(int i=0;i<num;++i){
		arr[i]=i;
	}

	srand((unsigned)time(NULL));
	int max=num;
	int temp=0;
	while(max>0){
		temp=rand()%max;
		swap(arr[temp],arr[--max]);
	}


	for(int i=0;i<num;++i)
		cout<<arr[i]<<" ";

	return 0;
}
