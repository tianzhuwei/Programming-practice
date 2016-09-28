/* 
昨天看个跳一级两级的青蛙，今天就升级到这么强了，NB

 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
 
思路：
这次采用递归的方式进行：
f(n)=f(n-1)+f(n-2)+...+f(1)+1;

 */

#include<iostream>
using namespace std;

int jumpFloor2(int number){

	int count=0;
	if(number==0){
		count=1;
		return count;
	}
	else if(number==1){
		count=1;
		return count;
	}
	else if(number==2){
		count=2;
		return count;
	}else{
		for(int i=1;i<=number;++i){
			count+=jumpFloor2(number-i);
		}
		return count;
	}
	
}

int main(){

	//测试已经提交到 nowcoder 并且通过，这里不再写出测试用例
	return 0;
}
