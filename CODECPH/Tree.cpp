#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int key;
  Node *left, *right;
  Node (int key)
  {
    this->key=key;
    left=right=NULL;
  }
};
void printpreorder(Node* root)               // 10
{      
  if(root!=NULL)                         //20        30
  {
    cout<<(root->key)<<" ";          // 40     50
    printpreorder(root->left);
    printpreorder(root->right);
  }
}
void printinorder(Node* root)               // 10
{      
  if(root!=NULL)                         //20        30
  {
                                    // 40     50
    printinorder(root->left);
    cout<<(root->key)<<" ";     
    printinorder(root->right);
  }
}
void printpostorder(Node* root)               // 10
{      
  if(root!=NULL)                         //20        30
  {
                                    // 40     50
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<(root->key)<<" ";       
  }
}
void printlevelorder(Node* root)
{
  if(root==NULL)
  {
    return;
  }
  queue<Node *> q;
  q.push(root);
  while(q.empty()==false)
  {
    
    Node *node = q.front(); 
        cout << node->key << " "; 
        q.pop(); 

        /* Enqueue left child */
        if (node->left != NULL) 
            q.push(node->left); 

        /* Enqueue right child */
        if (node->right != NULL) 
            q.push(node->right); 
    
  }

}
 Node* invertTree(Node* root) {
        if (root==NULL)
            return NULL;
        Node* temp = root->left;
        root->left=root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
        
    }		
  Node* searchBST(Node* root, int key) {

		if(root == NULL)
			return NULL;

		if(root->key == key)
			return root;

		else if(root->key < key)
			return searchBST(root->right, key);  

		else
			return searchBST(root->left, key);
	}


int height(Node* root)
{
  if(root==NULL)
  {
    return 0;
  }
  else
    return max(height(root->left),height(root->right))+1;
}
void printkDist(Node* root,int k) 
{
  if(root==NULL)
    return;
  if(k==0){
    cout<<(root->key)<<" ";
  }
  else
  {
    printkDist(root->left,k-1);
    printkDist(root->right,k-1);
  }
}
int main()
{
  Node *root=new Node(10);
  root->left=new Node(20);
  root->right=new Node(30);
  root->left->left=new Node(40);
  root->left->right= new Node(50);
  cout<< "print preorder:\n";
   printpreorder(root);
   cout<<"\nprint inorder : \n";
   printinorder(root);
   cout<<"\nprint postorder: \n";
   printpostorder(root);
   cout<<"\n";
   cout<<"height of the tree :\n ";
   cout<< height(root)<<"\n";
   printkDist(root,1);
   cout<< "\nprint level order\n";
   printlevelorder(root);
   invertTree(root);
   cout<<"\n";

   printinorder(root);
   cout<<"\n";
cout<< searchBST(root,10);
  return 0;

}