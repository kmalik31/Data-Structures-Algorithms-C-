#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left,*right;
    Node(int ndata)
    {
        this->data = ndata;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void inorder(Node* node)
{
    if(!node)
    return;
    inorder(node->left);
    cout<<node->data<<endl;
    inorder(node->right);

}
void insert(Node* root,int data)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node* n = q.front();
        q.pop();
        if(!n->left)
        {
            n->left = new Node(data);
            break;
        }
        else{
            q.push(n->left);
        }
        if(!n->right)
        {
            n->right = new Node(data);
            break;
        }
        else
        {
            q.push(n->right);
        }
    }
}
int main()
{
    Node* root = new Node(10);
    root->left = new Node(90);
    root->right = new Node(80);
    insert(root,100);
    inorder(root);
}
