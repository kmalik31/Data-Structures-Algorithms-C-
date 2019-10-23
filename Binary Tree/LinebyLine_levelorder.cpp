#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left,*right;
    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
void levelorder(Node* root)
{
    if(root == nullptr)
    return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        while(size>0)
        {
            Node* temp = q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            size--;
        }
        cout<<endl;
    }
}
int main()
{
    Node* root = new Node(90);
    root->left = new Node(10);
    root->right = new Node(20);
    levelorder(root);
}
