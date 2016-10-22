/*
在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

思路：
矩阵是有序的，从左下角来看，向上数字递减，向右数字递增

因此从左下角开始查找

当找到比左下角数字大的时候，向右移动
当找到比左下角数字小的时候，向上移动

*/


#include<iostream>
#include<vector>
using namespace std;

bool Find(vector<vector<int> > array,int target) 
{
    int hangshu=array.size();
    int lieshu=array[0].size();
    
    int i=0;
    int j=hangshu-1;//行;
    while(j>=0 && i<lieshu)
    {
        if(target<array[j][i])
        {
            --j;
        }else if(target>array[j][i])
        {
            ++i;
        }else
              return true;
    }
    return false;
}

int main()
{
    
}






















