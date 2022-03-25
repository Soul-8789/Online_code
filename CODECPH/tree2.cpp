#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
   struct Node* left;
   struct Node* right;
   Node(int x)
   {
    this->data=x;
    left=NULL;
    right=NULL;
   }
};
/*
void printpreorder(struct Node* node)
{
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    printpreorder(node->left);
    printpreorder(node->right);
}
void printinorder(struct Node *node)
{
    if(node==NULL)
        return;
   
    printinorder(node->left);
     cout<<node->data<<" ";
    printinorder(node->right);
}
void printpostorder(struct Node *node)
{
    if(node==NULL)
        return;
   
    printpostorder(node->left);
    printpostorder(node->right);
     cout<<node->data<<" ";
}
*/

void inorder(Node* root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int countBT(Node* root)
{
    if(root==NULL)
        return 0;
return countBT(root->left)+countBT(root->right)+1;
}
void levelorder(Node* root)
{
    if(root==NULL)
        return ;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* node =q.front();
        q.pop();
        if(node!=NULL)
        {
            cout<<node->data<<" ";
            if(node->left)
               q.push(node->left);
           
           if(node->right)
            q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int sumofallnodes(Node* root)
{ 
    if(root==NULL)
    return 0;
   return sumofallnodes(root->left)+sumofallnodes(root->right)+root->data;
}
int sumatk(Node* root,int k)
{
if(root==NULL)
    return -1;
int sum=0;
int level=0;

queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* node =q.front();
        q.pop();
        if(node!=NULL)
        {
             if (level==k)
             {
                sum+=node->data;
             }
            if(node->left)
               q.push(node->left);
           
           if(node->right)
            q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
return sum;
}
int heightoftree(Node* root)//O(no of nodes)
{
    if(root==NULL)
        return 0;
    //int lheight=heightoftree(root->left);
    //int lheight=heightoftree(root->right);

    return max(heightoftree(root->left),heightoftree(root->right))+1;
}

int main()
{

struct Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right =new Node(5);
root->right->left =new Node(6);
root->right->right =new Node(7);
 //levelorder(root);cout<<"\n";
 //cout<<sumatk(root,2);
cout<<countBT(root);
cout<<"\n";
cout<<sumofallnodes(root);
cout<<"\n";
cout<<heightoftree(root);

return 0;
}