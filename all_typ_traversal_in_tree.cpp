#include<bits/stdc++.h>
using namespace std;
struct node {
int data;
node* left ;
node* right ;
node (int val){
    data=val ;
    left=nullptr;
    right=nullptr;

}
};

void preorder(node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder (node* root)
{
    if (root ==nullptr) return ;
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node* current = q.front ();
        q.pop();
        cout<<current->data<<endl;
        if (current->left != NULL)
        {
            q.push(current->left);
        }
        if (current ->right != NULL)
        {
            q.push(current->right);
        }
    }
}

int main()
{
    node* root = new node (1);
    root ->left =new node (2);
    root->right= new node (3);
    root->left->left = new node (4);
    root->left->right = new node (5);
    root->right ->right= new node (6);
     cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    cout<<"the level order of the tree is"<<endl;
    levelorder(root);
    cout<<endl;

 return 0;
}