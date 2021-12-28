#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* temp = new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}
void printPostorder(node *node){
    if(node == NULL)
      return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout<<node->data<<" ";
}


int main(){
    node* root = newNode(1);
    root->left = newNode(2);
    root->right= newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    /*
             1
            / \
           2   3
          / \
         4   5 
    */
   cout<<"Inorder Traversal of Tree: : = : ";
   printPostorder(root);
}