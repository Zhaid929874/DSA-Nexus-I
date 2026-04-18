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
    void deleteAfter(int afterValue)
    {
        Node *temp = start;
        while (temp != NULL && temp->data != afterValue)
        {
            temp = temp->next;
        }
        if (temp != NULL && temp->next != NULL)
        {
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
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
    list.insertEnd(15);
    list.insertEnd(20);
    list.insertEnd(25);
    list.traverse();

    list.deleteAfter(20);
    list.traverse();


    return 0;
}
