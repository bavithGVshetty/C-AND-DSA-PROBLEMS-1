#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }
    void insertEnd(int val)
    {
        Node *node = new Node(val);
        if (!head)
        {
            head = node;
            return;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
            temp->next = node;
        }
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void swapNodes(int x, int y)
    {
        if (x == y)
        {
            return;
        }
        Node *prevX = nullptr;
        Node *prevY = nullptr;
        Node *currX = head;
        Node *currY = head;
        // Finding X
        while (currX && currX->data != x)
        {
            prevX = currX;
            currX = currX->next;
        }

        while (currY && currY->data != y)
        {
            prevY = currY;
            currY = currY->next;
        }
        if (!currX || !currY)
        {
            cout << "Not found";
            return;
        }
        if (prevX)
        {
            prevX->next = currY;
        }
        else
        {
            head = currY;
        }
        if (prevY)
        {
            prevY->next = currX;
        }
        else
        {
            head = currX;
        }
        Node *temp = currX->next;
        currX->next = currY->next;
        currY->next = temp;
    }

    void printList()
    {
        Node *temp = head;
        cout << temp->data;
        if (temp->next)
        {
            cout << " ";
        }
        temp = temp->next;
    }
};

int main()
{
    int n;
    cin >> n;
    LinkedList list;

    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id;
        list.insertEnd(id);
    }
    int a, b;
    cin >> a >> b;
    list.reverse();
    list.swapNodes(a, b);

    list.printList();
}
