/*
 
 对于一个字符串，和字符串中的某一位置，请设计一个算法，将包括i位置在内的左侧部分移动到右边，将右侧部分移动到左边。
 给定字符串A和它的长度n以及特定位置p，请返回旋转后的结果。
 测试样例：
 "ABCDEFGH",8,4
 返回："FGHABCDE"
 
 */

#include<iostream>
#include<string>
using namespace std;

string rotateString(string A, int n, int p){
	if(p>=n-1)
		return 0;
	string b(A,0,p+1);
	cout<<"b:"<<b<<endl;
	string l(A,p+1,n);
	cout<<"l"<<l<<endl;
	A=l;
	cout<<"A:"<<l<<endl;
	l+=b;
	cout<<"A:"<<l<<endl;
	return l;

}

int main(){

	string a="abcdedfgh";
cout<<	rotateString(a,8,4)<<endl;;
//	string b(a,0,1);
//	cout<<b<<endl;


	return 0;
}
