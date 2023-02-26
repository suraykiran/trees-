#include<bits/stdc++.h>
using namespace std;
 
    class Node{
         public:
             int data;
             Node *left;
             Node *right;
             Node(int val)
             {
                data=val;
                left=right=NULL;
             }
    };
     void postorder(Node *root)
     {
        if(root==NULL)
         return;
        postorder(root->left);
         postorder(root->right);
         cout<<root->data<<" ";
         

     }
     void preorder(Node *root)
     {
        if(root==NULL)
            return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

     }
     void Inorder(Node *root)
     {
        if(root==NULL){
            return;
        }
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
     }
    int main()
 {
    Node *root =new Node(10);
    Node *first=new Node(20);
    root->left=first;
    Node *second =new Node(30);
     root->right=second;
    Node *third =new Node(40);
    first->left=third;
    postorder(root);
   
 }
