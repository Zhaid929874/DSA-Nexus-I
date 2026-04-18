#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node * next;
    Node* prev;
    Node(int v)
    {
        data=v;
        next= nullptr;
        prev= nullptr;
    }
};
class LinkedList
{
public:
    Node*start= nullptr;

    void Insert_First(int v)
    {
        Node* p = new Node(v);
        if(start==nullptr)
        {
            start = p;
        }
        else
        {
            p->next = start;
            start->prev = p;
            start = p;
        }
    }

    void Insert_Last(int v)
    {
        Node* n = new Node(v);
        Node * p = start;
        while (p->next!=nullptr)
        {
            p = p->next;
        }
        n->prev = p;
        p->next = n;
    }
    void Insert_AF(int num, int data)
    {
        Node* ptr = start;

        while (ptr != nullptr && ptr->data != num)
        {
            ptr = ptr->next;
        }
        if (ptr == nullptr)
        {
            cout << "Element " << num << " not found in the list." << endl;
            return;
        }
        Node* p_ptr = new Node(data);
        p_ptr->data = data;
        p_ptr->next = ptr->next;
        p_ptr->prev = ptr;
        ptr->next = p_ptr;
        if (p_ptr->next != nullptr)
        {
            p_ptr->next->prev = p_ptr;
        }
    }
    void Insert_BF(int num, int data)
    {
        Node* ptr = start;

        while (ptr != nullptr && ptr->data != num)
        {
            ptr = ptr->next;
        }
        if (ptr == nullptr)
        {
            cout << "Element " << num << " not found in the list." << endl;
            return;
        }
        Node* p_ptr = new Node(data);
        p_ptr->data = data;
        p_ptr->next= ptr;
        p_ptr->prev = ptr -> prev;
        ptr->prev = p_ptr;
        if (p_ptr->next != nullptr)
        {
            p_ptr->prev->next = p_ptr;
        }
    }
    void delete_First()
    {
        if (start!=nullptr)
        {
            start->next->prev= nullptr;
            start = start->next;
        }
    }
    void delete_Last()
    {
        if (start!=nullptr)
        {

            Node *p =start;
            while (p->next!=nullptr)
            {
                p=p->next;
            }
            p->prev->next=nullptr;
        }
    }
    void traverse()
    {
        Node *p = start;
        while (p!=nullptr)
        {
            cout<<p->data<<"\t";
            p=p->next;
        }
        cout<<"\n";
    }
};
int main()
{
    LinkedList l;

    /* ………………………………………… Insertion at Beginning …………………………………………… */
    cout<<"Insert First"<<endl;
    l.Insert_First(5);
    l.traverse();
    l.Insert_First(7);
    l.traverse();
    l.Insert_First(2);
    l.traverse();

    /* ……………………………………………… Insertion at End ……………………………………………………… */
    cout<<"Insert Last"<<endl;
    l.Insert_Last(14);
    l.traverse();

    /* ………………………………………………  Insertion at After …………………………………………… */
    cout<<"Insert After"<<endl;
    l.Insert_AF(14,16);
    l.traverse();

    /* ………………………………………………  Insertion at Before …………………………………………… */
    cout<<"Insert Before"<<endl;
    l.Insert_BF(5,4);
    l.traverse();

    /* ………………………………………………  Delete First Node …………………………………………… */
    cout<<"Deletion First"<<endl;
    l.delete_First();
    l.traverse();
    l.delete_First();
    l.traverse();

    /* ………………………………………………  Delete Last Node …………………………………………… */
cout<<"Deletion Last"<<endl;
l.delete_Last();
l.traverse();
l.delete_Last();
l.traverse();
return 0;
}
