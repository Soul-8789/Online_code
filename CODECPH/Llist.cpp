#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
    Node(int d)
    {
    	data=d;
    	next=NULL;
    }
};
void print_list(Node* head)
{
	Node* current =head;
	while(current!=NULL)
	{
		cout<< (current->data)<<" ";
		current=current->next;
	}
}
void rlist(Node* head)
{
	if(head==NULL)
		return;
	cout<<head->data<<" ";
	rlist(head->next);
}
int main()
{
	Node* head= new Node(10);
	head->next=new Node(20);
	head->next->next= new Node(30);
	print_list(head);
	cout<<"\n";
	rlist(head);
	return 0;
}