#include<iostream>
using namespace std;

int fanzhuan(int data){

	int b=0;
	while(data){
		b=b*2+data%2;
		data/=2;
	}
	return b;

}

int main(){

	cout<<fanzhuan(6)<<endl;


	return 0;
}
