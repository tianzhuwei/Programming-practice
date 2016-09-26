//要求：用栈来实现队列的操作（进栈/出栈/判断是否为空）
//思路：用两个栈来实现栈A 栈B，开始入队时放入栈A，当要进行出栈时，如果栈B为空，将栈A中所有元素移动到栈B中，然后从栈B 中进行出栈操作，当来个栈均为空时，代表队列为空。
//下面为代码实现
#include<iostream>
#define NUM 100
using namespace std;
int stackA[NUM]={-1};
int A=0;
int stackB[NUM+2]={-1};
int B=0;

bool enqueue(int data){
	//入队
	if(A>=NUM){
		cout<<"FULLED"<<endl;
		return false;//如果已満，返回失败
	}
	stackA[A]=data;
	++A;
	return true;
}

bool dequeue(){
	//出队
	if(B==0 && A==0)
		return 0;
	if(B==0){
		//将栈A中所有元素放入到栈B中;
		while(A!=0){
			--A;
			if(++B >=NUM)
				return false;
			stackB[B]=stackA[A];
			stackA[A]=-1;
		}
		cout<<stackB[B]<<endl;
		return true;
	}//if
	else
	{
		cout<<stackB[--B]<<endl;
		return true;
	}
}

bool Isempry(){
	if(A==0&&B==0)
		return true;
	else
		return false;
}


int main(){
	
	for(int i=0;i<100;++i){
		enqueue(i);
	}
	for(int i=0;i<10;++i){
		dequeue();
	}

	return 0;

}
