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
    void insertBefore(int beforeValue, int data)
    {
        if (start == NULL)
            return;

        if (start->data == beforeValue)
        {
            Node *newNode = new Node(data);
            newNode->next = start;
            start = newNode;
            return;
        }
        Node *temp = start, *prev = NULL;
        while (temp != NULL && temp->data != beforeValue)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp != NULL)
        {
            Node *newNode = new Node(data);
            newNode->next = temp;
            prev->next = newNode;
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

    list.insertEnd(15);
    list.traverse();
    list.insertEnd(20);
    list.traverse();

    list.insertBefore(20, 25);
    list.traverse();
    list.insertBefore(15, 35);
    list.traverse();
    list.insertBefore(10, 5);
    list.traverse();
    list.insertBefore(100, 50);
    list.traverse();

    return 0;
}
