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
    void deleteBefore(int beforeValue)
    {
        if (start == NULL || start->data == beforeValue)
            return;
        Node *temp = start, *prev = NULL, *prevPrev = NULL;
        while (temp != NULL && temp->data != beforeValue)
        {
            prevPrev = prev;
            prev = temp;
            temp = temp->next;
        }

        if (prevPrev == NULL)
        {
            start = temp;
            delete prev;
        }
        else
        {
            prevPrev->next = temp;
            delete prev;
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
    list.insertEnd(5);
    list.insertEnd(15);
    list.insertEnd(20);
    list.insertEnd(30);
    list.traverse();

    list.deleteBefore(30);
    list.traverse();

    return 0;
}