#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int info;
    struct node *left, *right;
} TNODE;

TNODE * newNode(int); 
TNODE * insertNode(TNODE *, int); 
TNODE * searchNode(TNODE *, int); 
TNODE * smallestNode(TNODE *); 
TNODE * deleteNode(TNODE *, int);
TNODE * deleteMin(TNODE *);

void preOrder(TNODE *); 
void postOrder(TNODE *); 
void inOrder(TNODE * t); 
void children(TNODE *, int); 

int leftChild(TNODE *, int); 
int rightChild(TNODE *, int);
int isInternal(TNODE *); 
int treeHeight(TNODE *); 
int treeSize(TNODE *); 

int main() {
    TNODE * root = NULL;
    TNODE * t;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root =insertNode(root, 20);
    root =insertNode(root, 40);
    root =insertNode(root, 70);
    root =insertNode(root, 60);
    root =insertNode(root, 80);
    root =insertNode(root, 75);
    root =insertNode(root, 58);
    root =insertNode(root, 37);
    root =insertNode(root, 39);
    root =insertNode(root, 45);
 
    // Print inoder list of the BST
    printf("Inorder listing\n");
    inOrder(root);
    printf("\n");

    // Delete a node
    printf("----------------------\n");
    root = deleteNode(root,20);
    inOrder(root);
    printf("\n");

    // Put the node back
    printf("----------------------\n");
    root = insertNode(root,20);
    inOrder(root);
    printf("\n");

    printf("----------------------\n");
    children(root,30);
    root = deleteNode(root,30);
    inOrder(root);
    printf("\n");
    children(root,37);
    printf("----------------------\n");

    // Delete minimum
    root = deleteMin(root);
    inOrder(root);
    printf("\n");
    printf("----------------------\n");
} 

TNODE * newNode(int x) {
    struct node* p = (TNODE *)malloc(sizeof(TNODE));
    p->info = x;
    p->left = p->right = NULL;
    return p;
}

void preOrder(TNODE * t) {
    if (t != NULL) {
        printf("%d ", t->info);
        preOrder(t->left);
        preOrder(t->right);
    }
}

void postOrder(TNODE * t) {
    if (t != NULL) {
        postOrder(t->left);
        postOrder(t->right);
        printf("%d ", t->info);
    }
}

void inOrder(TNODE * t) {
    if (t != NULL) {
        inOrder(t->left);
        printf("%d ", t->info);
        inOrder(t->right);
    }
}
 
TNODE * insertNode(TNODE * node, int info) {
    // If the tree is empty, return a new node 
    if (node == NULL)
        return newNode(info);
 
    // Otherwise, insert down the tree to left or righ 
    if (info < node->info)
        node->left = insertNode(node->left, info);
    else if (info > node->info)
        node->right = insertNode(node->right, info);
 
    return node; // Recursion tails off 
}

TNODE * searchNode(TNODE * t, int x) { 
    if (t == NULL) 
        return t;
    if (t->info == x) 
        return t;
    if (t->info > x)  {
        t = searchNode(t->left, x);
        return t;
    }
    if (t->info < x) { 
        t = searchNode(t->right, x) ;
        return t;
    }

}

int leftChild(TNODE *t, int x) {
    TNODE *p;
    p = searchNode(t, x);
    if (p==NULL) return -1;
    else 
        return p->left->info;
}

int rightChild(TNODE *t, int x) {
    TNODE *p;
    p = searchNode(t, x);
    if (p==NULL) return -1;
    else 
        return p->right->info;
}

void children(TNODE * t, int x) {
    TNODE *t1 = searchNode(t, x);
    if (t1 == NULL) {
         printf("%d is not present\n", t->info);
         return;
    }
    if (t1->left != NULL)
        printf("Left child of %d is %d \n",t1->info,t1->left->info);
    else 
        printf("%d Has no left child\n",t1->info);
    if (t1->right != NULL) 
        printf("Right child of %d is %d\n",t1->info,t1->right->info);
    else 
        printf("%d Has no right child\n",t1->info);
}

int isInternal(TNODE *t) {
    int n = 0;
    n = (t != NULL) && ((t->left != NULL) || (t->right != NULL)) ;
    return n;
}

int treeHeight(TNODE *t) {
   int rHeight, lHeight;
   int maxHeight;
   int i;
   if(t == NULL) {
      return 0; 
   } else {
      maxHeight = 0;
      lHeight = treeHeight(t->left); 
      rHeight = treeHeight(t->right);
      if (rHeight > lHeight) {
          if (maxHeight < rHeight)
              maxHeight = rHeight; 
      } else {
          if (maxHeight < lHeight)
              maxHeight = lHeight; 
     }
     return maxHeight + 1;
    }
}

int treeSize(TNODE *t) {
    int size;
    if (t == NULL) 
        return 0;
    else {
        size = 1 + treeSize(t->left) + treeSize(t->right);
        return size;
    }
}

TNODE * smallestNode(TNODE * node) {
    TNODE * p = node;
 
    /* loop down to find the leftmost leaf */
    while (p && p->left != NULL)
        p = p->left;
 
    return p;
}

TNODE * deleteNode(TNODE * root, int x) {
    TNODE * temp;
    if (root == NULL) {
        printf("Error: empty tree or element not present\n");
        return root;
    }
 
    // If element is smaller than that at the root
    // delete from the left subtree
    if (x < root->info)
        root->left = deleteNode(root->left, x);
 
    // If element is bigger than the element at the root delete 
    // from the right subtree
    else if (x > root->info)
        root->right = deleteNode(root->right, x);
 
    // If element at the root equal to element to be 
    // deleted, delete the root. 
    else {
        // Node has only one child or no child
        if (root->left == NULL) {
            temp = root->right;
            printf("Delete %d success\n",root->info);
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            temp = root->left;
            printf("Delete %d success\n",root->info);
            free(root);
            return temp;
        }
 
        // Node with two children: get the inorder successor
        printf("%d has two children, copy inorder successor\n",root->info);
        temp = smallestNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->info = temp->info;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->info);
    }
    return root;
} 

TNODE * deleteMin(TNODE * root) {
    int x = smallestNode(root)->info;
    printf("Deleting minimum %d\n",x);
    return deleteNode(root,x);
}
 
