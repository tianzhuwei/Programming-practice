#include<iostream>
using namespace std;

int Myatoi(char * str)
{
	if(str==NULL)
		return -1;
	int flag=1;
	if(*str=='-'||*str=='+')
	{
		if(*str=='-')
		{
			flag=-1;
			str++;
		}
		else
		{
			flag=1;
			str++;
		}
	}
	int result=0;
	while(*str>='0'&&*str<='9')
	{
		result=result*10+(*str-'0');
		str++;
	}

	return result*flag;

}

int main()
{
	char a[]="1243";

	cout<<Myatoi(a)<<endl;



	return 0;
}
