/*
 斐波那契数列
 注意使用递归的方法与使用动态规划（或者叫做迭代法）的时间消耗差距特别的大，注意思考为什么。
 */
#include<iostream>
#include<time.h>
using namespace std;

int Fibonacci1(int n){
	
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return Fibonacci1(n-1)+Fibonacci1(n-2);
	}

}

int Fibonacci2(int n){

	int f=0,g=1;
	while(n--){
		g+=f;
		f=g-f;
	}
	return f;

}

int main(){

	clock_t time=clock();
	cout<<Fibonacci1(39)<<endl;
	cout<<"Fibonacci1 use time "<<(clock()-time)<<" us"<<endl;
	time=clock();
	cout<<Fibonacci2(39)<<endl;
	cout<<"Fibonacci2 use time "<<(clock()-time)<<" us"<<endl;
	return 0;
}
