#include<iostream>
#include<vector>
using namespace std;
/*
 输入某二叉树的前序遍历和中序遍历的结果，请重新建出该二叉树
 */
struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x),left(NULL),right(NULL)
	{

	}
};

TreeNode* reConstructBinaryTree(vector<int>pre,vector<int>vin)
{
	if(pre.size()<=0||vin.size()<=0)
		return NULL;
	TreeNode* root=new TreeNode(pre[0]);
	vector<int> new_vin_left;
	vector<int> new_vin_right;
	int i=0;
	for(;i<vin.size();++i)
	{
		if(vin[i]!=pre[0])
			new_vin_left.push_back(vin[i]);
		else
			break;
	}
	++i;
	for(;i<vin.size();++i)
	{
		new_vin_right.push_back(vin[i]);
	}
	//以上将 vin 按根结点分为两部分

	pre.erase(pre.begin());
    root->left=reConstructBinaryTree(pre,new_vin_left);
    
    //这里一定要注意，此时传入的 pre 还是上面只删除了一个根结点的 pre ，如果传入的是指针则可以去除以下的操作
    //这样也是有个弊端的，每次都要开辟内在空间，还是使用数组指针的形势比较好;
	for(int i=0;i<new_vin_left.size();++i)
		pre.erase(pre.begin());
	root->right=reConstructBinaryTree(pre,new_vin_right);
	cout<<root->val<<endl;
	return root;
}

int main()
{
	int a[8]={1,2,4,7,3,5,6,8};
	int b[8]={4,7,2,1,5,3,8,6};
	vector<int>pre;
	vector<int>vin;
	for(int i=0;i<8;++i){
		pre.push_back(a[i]);
		vin.push_back(b[i]);
	}
	reConstructBinaryTree(pre,vin);

	return 0;
}
