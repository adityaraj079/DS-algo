#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter the data"<<endl;
    int data; cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;

    cout<<"Enter the left data of "<<data;
    root ->left = buildTree(root->left);
    cout<<"Enter the right data of "<<data;
    root ->right = buildTree(root->right);
}

//Build tree from level order traversal
node* buildTreeFromLevelOrder(node* root)
{
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;   cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        
        cout<<"Enter left node for: "<<data<<endl;
        int leftData;   cin>>leftData;

        if(leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<data<<endl;
        int rightData;   cin>>rightData;

        if(rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}

int main()
{

}