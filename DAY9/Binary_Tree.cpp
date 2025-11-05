#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int val){
            data=val;
            left=right=nullptr;
        }
};

class BinaryTree{
    public:
        Node *root;

        BinaryTree(){
            root=nullptr;
        }

        void insertiontree(){
            root=new Node(1);
            root->left=new Node(-1);
            root->right=new Node(3);
            root->left->left=new Node(4);
            root->left->right=new Node(5);
             root->right->left=new Node(6);
            root->right->right=new Node(7);
        }
        void inorder(Node* root){
            if(!root){
                return;
            }
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }

        void preorder(Node *root){
            if(!root){
                return ;
            }
            cout<<root->data<< " ";
            preorder(root->left);
            preorder(root->right);
        }
        void postorder(Node *root){
            if(!root){
                return;
            }
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<" ";
        }



};

int main(){
    BinaryTree bt;
    bt.insertiontree();
cout<<"Inorder: ";
    bt.inorder(bt.root);
cout<<"\nPreorder: ";
bt.preorder(bt.root);
cout<<"\nPostOrder: ";
bt.postorder(bt.root);

}