/*问题：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
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
