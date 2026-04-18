#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int v)
    {
        data = v;
        next = nullptr;
    }
};
class LinkedList
{
public:
    Node*start = nullptr;
    void insert_first(int v)
    {
        Node*node = new Node(v);
        node->next = start;
        start = node;
    }
    void insert_end(int v)
    {
        Node* node = new Node(v);
        if (start == nullptr)
        {
            start = node;
            return;
        }
        Node* p = start;
        while (p->next != nullptr)
        {
            p = p->next;
        }
        p->next = node;
    }
    void delete_first()
    {
        if (start == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if(start!=nullptr)
        {
            Node *ptr = start;
            start = start->next;

            delete ptr;
        }
    }
    void delete_last()
    {
        if (start == NULL)
        {
            return;
        }
        if (start->next == NULL)
        {
            delete start;
            start = NULL;
            return;
        }
        Node *p_p = start;
        while (p_p->next->next != NULL)
        {
            p_p = p_p->next;
        }
        delete p_p->next;
        p_p->next = NULL;
    }
    void traverse()
    {
        Node*p = start;
        while(p!=nullptr)
        {
            cout<< p->data<<"\t";
            p = p->next;
        }
        cout<<"\n";
    }
};
int main()
{
    LinkedList lst;

    /* ----------------- Insert at Beginning ----------------- */
    cout << "Insert at the First:" << endl;
    lst.insert_first(10);
    lst.traverse();
    lst.insert_first(3);
    lst.traverse();
    lst.insert_first(6);
    lst.traverse();
    lst.insert_first(9);
    lst.traverse();
    lst.insert_first(7);
    lst.traverse();

    /* ----------------- Insert at the End ----------------- */
    cout << "Insert at the end:" << endl;
    lst.insert_end(15);
    lst.traverse();
    /* ----------------- Delete First Node ----------------- */
    cout<<"Deleting First:"<<"\n";
    lst.delete_first();
    lst.traverse();
    /* ----------------- Delete End Node ----------------- */
    cout<<"Deleting Last:"<<"\n";
    lst.delete_last();
    lst.traverse();
    return 0;
}
