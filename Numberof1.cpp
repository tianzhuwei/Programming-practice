#include<iostream>
using namespace std;

int num(int n)
{
	int number=0;
	while(n)
	{
		if(n<=1)
		{
			if(n==1){
				number++;
				n--;
			}
		}else{
			n=(n>>1);
			if(n&1)
				number++;
		}

	}
	return number;
}

int main()

{
	cout<<" : have "<<num(99999999)<<endl;

	return 0;
}
