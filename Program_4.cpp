/*
Q:一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

思路：num = x + 2y ;x为一次走一级台阶的次数，y为一次走两次台阶的次数
我们从 x = 0 开始，当 (num - x)%2 == 0 时此方案即为可行解
反之此方案不可行
我早些写的这个是非递归方式进行实现的，但是提交上去之后总是报错，提示：

您的代码已保存
浮点错误:您的程序运行时发生浮点错误，比如遇到了除以 0 的情况
case通过率为0.00%

但是我又找不到我程序到底出现错在哪里！！
大部分聪明人使用的是类似菲波那契序列的方式，思路简单，代码精简;
*/


#include<iostream>
using namespace std;

int C(int i,int number){//计算组合的次数
	int numerator=1;//分子;
	int denominator=1;//分母;
	int tt = number - i;
	while(number>0){
		numerator*=(number--);
	}
	while(i>0){
		denominator*=(i--);
	}
	while(tt>0){
		denominator*=(tt--);
	}

	return numerator/denominator ;
}

int jumpFloor(int number){
	int count=0;
	if(number%2==0)
		count=1;
	for(int i=1;i<number;++i){
		if( (number-i)%2==0 ){
			int temp=(number-i)/2;
			if(temp>=i){
				count+=C(i,temp+1);
			}else{
				count+=C(temp,i+1);
			}
		}
	}
	count++;//当全走一步时;
	return count;
}

int jump2(int num){

	if(num<=0)
		return 0;
	if(num==1)
		return 1;
	if(num==2)
		return 2;
	return (jump2(num-1)+jump2(num-2));

}

int main(){
	cout<<jumpFloor(3)<<endl;
	cout<<jumpFloor(4)<<endl;
	cout<<jumpFloor(2)<<endl;
	cout<<"testCompare"<<endl;
	cout<<jump2(3)<<endl;
	cout<<jump2(4)<<endl;
	cout<<jump2(2)<<endl;


	/*
	cout<<C(1,3)<<endl;
	cout<<C(1,4)<<endl;
	cout<<C(3,5)<<endl;
	*/
	return 0;
}
