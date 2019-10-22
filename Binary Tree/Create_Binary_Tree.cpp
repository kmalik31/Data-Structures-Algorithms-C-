#include<iostream>
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

int main()
{
    Node* root = new Node(10);
    root->left = new Node(90);
    root->right = new Node(80);
    root->left->left = new Node(30);
    root->left->right = new node(40);
    inorder(root);
}
