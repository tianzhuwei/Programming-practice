/*
 
   洗牌在生活中十分常见，现在需要写一个程序模拟洗牌的过程。 现在需要洗2n张牌，从上到下依次是第1张，第2张，第3张一直到第2n张。首先，我们把这2n张牌分成两堆，左手拿着第1张到第n张（上半堆），右手拿着第n+1张到第2n张（下半堆）。接着就开始洗牌的过程，先放下右手的最后一张牌，再放下左手的最后一张牌，接着放下右手的倒数第二张牌，再放下左手的倒数第二张牌，直到最后放下左手的第一张牌。接着把牌合并起来就可以了。 例如有6张牌，最开始牌的序列是1,2,3,4,5,6。首先分成两组，左手拿着1,2,3；右手拿着4,5,6。在洗牌过程中按顺序放下了6,3,5,2,4,1。把这六张牌再次合成一组牌之后，我们按照从上往下的顺序看这组牌，就变成了序列1,4,2,5,3,6。 现在给出一个原始牌组，请输出这副牌洗牌k次之后从上往下的序列。 

思路：
这道题在我现在算来真的不是很复杂，两个数组合并的问题，到是描述的输入有点麻烦

 
 */
#include<iostream>
using namespace std;
#include<stdio.h>
void xipai(int*arr,int n){
	
	int*left=new int[n];
	int*right=new int[n];
	for(int i=0;i<n;++i)
		left[i]=arr[i];
	for(int i=0,j=n;j<2*n;++j)
		right[i]=arr[j];
	int end=n-1;
	for(int i=n-1,j=n-1;i!=0;--i,--j){
		arr[end--]=right[j];
		arr[end--]=left[i];
	}

}

void Kxiapi(int*arr,int n,int k){
	while(k>=0){
		xipai(arr,n);
		--k;
	}
	for(int i =0;i<n-1;++i)
		cout<<arr[i]<<" ";
	cout<<arr[n-1]<<endl;
}

int main(){
	
	int group,n,k;
	cin>>group;
	while(group>0){
	
		cin>>n>>k;
		int*arr=new int[2*n];
		int nu=2*n;
		int i=0;
		char c;
		while((c=getchar())!='\n'){
			if(c!=' '){
//				ungetc(c,stdin);
				cin>>arr[i++];
			}
		}


		Kxiapi(arr,n,k);
	
	}
	
	return 0;

}
