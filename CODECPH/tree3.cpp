#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int x)
	{
		this->data=x;
		left=right=NULL;
	}

};
Node* buildTree(int preorder[],int inorder[],int start,int end)
{
	static int idx=0;
	if(start>end)
	{
		return NULL;
	}
	
}
void inorder(Node* root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
int preorder[]={1,2,4,3,5};
int inorder[]={4,2,1,5,3};
Node* root = buildTree(preorder,inorder,0,4);