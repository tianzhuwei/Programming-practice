#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	int *a,b;
	
	cout<<typeid(a).name()<<endl;

	cout<<typeid(int).name()<<endl;
	cout<<typeid(b).name()<<endl;
	return 0;
}
