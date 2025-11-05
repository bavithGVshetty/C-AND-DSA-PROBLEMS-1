#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtBegining(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void deleteAtBegining()
    {
        if (head == nullptr)
        {
            cout << "List is empty!\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void display()
    {
        Node *temp = head;
        cout << "Linked list";
        while (temp!=NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    LinkedList list;
    list.insertAtBegining(1);
    list.insertAtBegining(2);
    list.insertAtBegining(3);
    list.insertAtBegining(4);
    cout<<"Before Deletion:\n";
    list.display();

    list.deleteAtBegining();
    cout<<"After Deletion:\n"<<endl; 
    list.display();
    return 0;
}