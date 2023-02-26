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
     void prin(vector<vector<int>>ans)
     {
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                cout<< ans[i][j];
            }
            cout<<endl;
        }
     }
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
      void rlevelorder(Node *root,vector<vector<int>>&ans,int l)
      {
        if(root==NULL)
            return;
        if(ans.size()==l)
            ans.push_back({root->data});
        else
            ans[l].push_back(root->data);
        rlevelorder(root->left,ans,l+1);
        rlevelorder(root->right,ans,l+1);
      }
     void levelorder(Node *root)
     {
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        int n=q.size();
        while(!q.empty())
        {
           vector<int>v;
           int n=q.size();
           while(n--)
           {
            Node *p=q.front();
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
             v.push_back(p->data);
             q.pop();
           }
           ans.push_back(v);
        }
        prin(ans);
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
    vector<vector<int>>ans;
    rlevelorder(root,ans,0);
    prin(ans);

 }
   
   
