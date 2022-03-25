#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
  Node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};
Node* buildtree(){
  int d;
  cin>>d;
  Node *root;
  if(d==-1){
    return NULL;
  }
  root=new Node(d);
  root->left=buildtree();
  root->right=buildtree();
  return root;
}
void printpreorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<< root->data<<" ";
	printpreorder(root->left);
	printpreorder(root->right);
}
void printpreorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	printpreorder(root->left);
	cout<< root->data<<" ";
	printpreorder(root->right);
}
void printpreorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	printpreorder(root->left);
	printpreorder(root->right);
	cout<< root->data<<" ";
}

void print(Node *root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);
}
int main()
{
    Node *root=buildtree();  
    print(root);
    
  return 0;
} 