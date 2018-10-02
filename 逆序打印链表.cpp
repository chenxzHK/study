#include <iostream>
#include <stack>
#define N 5
using namespace std;

typedef struct ListNode
{
	int m;
	ListNode *pNext;
}ListNode;

struct ListNode* creat(int* a);
void PrintListReversingly(ListNode *pHead);

int main(int argc, char *argv[])
{
	int a[N]={1,2,3,4,5};
	ListNode *head;
	head=creat(a);
	PrintListReversingly(head);
	return 0;
}

ListNode* creat(int* a)
{
	int m;
	struct ListNode *head, *tail, *p;
	head=tail=NULL;
	for (int i=0; i<N; i++)
	{
		p=(ListNode* )malloc(sizeof(ListNode));
		p->m=a[i];
		p->pNext=NULL;
		if (head==NULL)
			head=p;
		else
			tail->pNext=p;
		tail=p;
	}
	return head;
}

void PrintListReversingly(ListNode *pHead)
{
	stack <ListNode *> Node;
	ListNode *p=pHead;
	while (p!=nullptr)
	{
		Node.push(p);
		p=p->pNext;
	}
	while (!Node.empty())
	{
		p=Node.top();
		cout << p->m << endl;
		Node.pop();
	}
}