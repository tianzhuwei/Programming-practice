/*问题：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
<<<<<<< HEAD

解题思路：
第一遍看这个题目时直接使用最笨的方法去解决，依次遍历整个数组，时间复杂度算为 O(n)
但是看过大家的分析之后原来我们还是可以使用二分查找来进行的
下面添加一种尝试使用二分查找的思路来进行查找

=======
找最小值

*/
#include<iostream>
#include<vector>
using namespace std;

int minNumberInRotateArray(vector<int> rotateArray){

	if(rotateArray.size()==0)
		return 0;
	int i=1;
	for(;i<rotateArray.size();++i){
		if(rotateArray[i]<rotateArray[i-1])
			return rotateArray[i];
	}
	return rotateArray[i-1];

}

int main(){
	vector<int> ve;
	for(int i=5;i<10;++i)
		ve.push_back(i);
	ve.push_back(1);
	cout<<minNumberInRotateArray(ve)<<endl;

	return 0;
}
