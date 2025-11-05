// Binary Search Tree
// Type of Binary tree

// Properties
// 1.Effiecient in terms of Searching, Insertion and deletion
// 2.Every Node has at most two children->Left and right
// 2.Left subtree contains values less then Parent node
// 3.Right subtree contais values greater than Parent node
// Implementation

#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
public:
    ListNode *head;

    LinkedList()
    {
        head = nullptr;
    }
    void insertAtEnd(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        ListNode *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display()
    {
        ListNode *temp = head;
        cout << "Linked List: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

class BinarySearchTree
{
public:
    TreeNode *root;

    BinarySearchTree()
    {
        root = nullptr;
    }

    TreeNode *insert(TreeNode *root, int value)
    {
        if (root == nullptr)
        {
            return new TreeNode(value);
        }

        if (value < root->data)
        {
            root->left = insert(root->left, value);
        }
        if (value > root->data)
        {
            root->right = insert(root->right, value);
        }
        return root;
    }
    void postorder(TreeNode *root)
    {
        if (root != nullptr)
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
    }
};
int main()
{
    BinarySearchTree BST;
    LinkedList list;
    int n;
    cout << "Enter the size of node: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        list.insertAtEnd(value);
    }
    // Copying LL input to the trees
    ListNode *temp = list.head;
    cout << "List Outputs" << endl;
    list.display();
    while (temp != nullptr)
    {
        BST.root = BST.insert(BST.root, temp->data);
        temp = temp->next;
    }
    cout<<"BST Postorder Traversal : "<<endl;
    BST.postorder(BST.root);
}