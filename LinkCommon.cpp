//输入两个链表，找出他们的第一个相同的key
//这个题目前期理解有问题，整理第二个解法 Func()
#include<iostream>
using namespace std;
struct ListNode
{
	int m_nKey;
	ListNode* m_pNext;
};

ListNode* FindFirstCommonNode(ListNode* pHead1,ListNode*pHead2)
{
	ListNode* te=pHead2;
	while(pHead1!=NULL)
	{
		pHead2=te;
		while(pHead2!=NULL)
		{
			if(pHead1->m_nKey==pHead2->m_nKey)
			{
				return pHead1;
			}else
			{
				pHead2=pHead2->m_pNext;
			}
		}
		pHead1=pHead1->m_pNext;
	}
	return NULL;
}



int main()
{
	ListNode p1,p2,*co;
	p1.m_pNext=NULL;
	p1.m_nKey=1;
	p2.m_pNext=NULL;
	p2.m_nKey=2;
	for(int i=4;i<10;++i)
	{
		ListNode* t1=new ListNode;
		t1->m_nKey=i;
		t1->m_pNext=p1.m_pNext;
		p1.m_pNext=t1;

		ListNode*t2=new ListNode;
		t2->m_nKey=i;
		t2->m_pNext=p2.m_pNext;
		p2.m_pNext=t2;

	}
	co=FindFirstCommonNode(&p1,&p2);
	cout<<co->m_nKey<<endl;

	return 0;
}
