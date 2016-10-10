/*
 我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

 解题思路：
  这个问题类似于青蛙跳台阶的问题，一次可以跳一级台阶，也可以跳两级，也可以跳n级
  就是青蛙问题变种
  我们之前也写过一个，使用递归虽然看起来很简单，但是效率非常低，所以最好改写成非递归形势（有种说法称为动态规划）
 */
#include<iostream>
using namespace std;

int rectCover1(int n){//这种方法耗时太严重，提交之后运行不能通过
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	else{
	return rectCover1(n-1)+rectCover1(n-2);
	}

}

int rectCover2(int n)//所以这里我们使用动态规划的方法
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	else
	{
		int s=1,g=2;
		for(int i=3;i<=number;++i)
		{
			g+=s;
			s=g-s;
		}
		return g;
	}

}

int main(){


	return 0;
}
