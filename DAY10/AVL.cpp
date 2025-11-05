// AVL Tree
// Adelson-Velsky and Landis
// 1962
// Binary Search tree
// Self balancing  binary search tree


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class AVLTree{
private:
    class Node{

        public:
            int key;
            Node *left;
            Node *right;
            int heightofTree;
            Node(int k){
                key=k;
                right=left=nullptr;
                heightofTree=1;
            }
        };

            Node *root;

        int height(Node *n) const {
            return n?n->heightofTree:0;
        }

        void fixheight(Node *n){
            if(n){
                n->heightofTree=1+max(height(n->left),height(n->right));
            }
        }
        // Helper function
        int balanceFactor(Node *n)
        const{
            return n?height(n->left)-height(n->right):0;
        }

        Node *rotateRight(Node *y){
            Node *x=y->left;
            Node *T2=x->right;
            x->right=y;
            y->left=T2;

            fixheight(y);
            fixheight(x);
            return x;
        }

          Node *rotateLeft(Node *x){
            Node *y=x->right;
            Node *T2=y->left;
           y->left=x;
           x->right=T2;

            fixheight(x);
            fixheight(y);
            return y;
        }

        Node *insertNode(Node *node,int key){
            if(!node){
                return new Node(key);
            }

            if(key<node->key){
                node->left=insertNode(node->left,key);
            }
            else if(key>node->key){
                node->right=insertNode(node->right,key);
            }
            else{
                return node;
            }
            fixheight(node);

            int bf=balanceFactor(node);
            // 
            if(bf>1&& key<node->left->key){
                return rotateRight(node);
            }
            if(bf<-1&&key>node->right->key){
                return rotateLeft(node);
            }
            if(bf>1&&key>node->right->key){
                node->left=rotateLeft(node->left);
                return rotateRight(node);
            }

            if(bf<-1&& key<node->right->key){
                node->right=rotateRight(node->right);
                return rotateLeft(node);
            }
            return node;
        }    
    
        void inOrder(Node *node)
        const {
            if(!node){
                return;
            }
            inOrder(node->left);
            cout<<node->key<<" ";
            inOrder(node->right);
        }

        public:
            AVLTree(){
                root=nullptr;
            }
            
            void insert(int key){
                root=insertNode(root,key);
            }
            void inOrderTravesal() const{
                inOrder(root);
                cout<<"\n";
            }
            };


int main(){
    AVLTree tree;
    vector<int> keys;
    int n,val;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        keys.push_back(val);
    }
    for(int k:keys){
        tree.insert(k);            
    }

    cout<<"Inorder tree: ";
    tree.inOrderTravesal();

    
    
    
}

