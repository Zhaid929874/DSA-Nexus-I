#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *start = NULL;
    void insertEnd(int data)
    {
        Node *newNode = new Node(data);
        if (start == NULL)
        {
            start = newNode;
            return;
        }
        Node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAfter(int afterValue, int data)
    {
        Node *temp = start;
        while (temp != NULL && temp->data != afterValue)
        {
            temp = temp->next;
        }
        if (temp != NULL)
        {
            Node *newNode = new Node(data);
            newNode->next = temp->next;


            temp->next = newNode;
        }
    }
    void traverse()
    {
        Node *temp = start;
        while (temp != NULL)


        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.insertEnd(10);
    list.traverse();
    list.insertEnd(20);
    list.traverse();
    list.insertEnd(30);
    list.traverse();

    list.insertAfter(20, 25);
    list.traverse();
    list.insertAfter(30, 35);
    list.traverse();
    list.insertAfter(10, 15);
    list.traverse();
    list.insertAfter(100, 50);
    list.traverse();

    return 0;
}
