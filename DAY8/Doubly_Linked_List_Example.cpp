#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;

    DoublyLinkedList()
    {
        head = nullptr;
    }

    void insertAtBegining(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int val)
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        if (temp->data = val)
        {
            head = temp->next;
            if (head)
            {
                head->prev = nullptr;
            }
            delete temp;
            return;
        }
        while (temp && temp->data != val)
        {
            temp = temp->next;
        }
        if (!temp)
        {
            return;
        }
        if (temp->next)
        {
            temp->next->prev = temp->prev;
        }
        if (temp->prev)
        {
            temp->prev->next = temp->next;
        }
        delete temp;
    }

    void display()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        cout << "Forward: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertAtBegining(1);
    dll.insertAtBegining(2);
    dll.insertAtEnd(3);
    dll.deleteNode(2);
    dll.display();
}