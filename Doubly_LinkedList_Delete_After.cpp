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
            start->prev= p;
            start= p;
        }
    }
    void Delete_After(int num)
    {
        if (start==nullptr)
        {
            cout << "List is empty"<<"\n";
            return;
        }

        Node *ptr = start;
        while(ptr->data!=num)
        {
            ptr=ptr->next;
        }
        Node *temp = ptr->next;
        ptr->next=temp->next;
        if (ptr->next != nullptr)
        {
            temp->next->prev = ptr;


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
    cout<<"Insert First:"<<endl;
    l.Insert_First(5);
    l.traverse();
    l.Insert_First(7);
    l.traverse();
    l.Insert_First(2);
    l.traverse();
    l.Insert_First(10);
    l.traverse();
    l.Insert_First(15);
    l.traverse();

    cout << "Original List: "<<"\n";
    l.traverse();

    cout<<"Deletion After: "<<endl;
    l.Delete_After(2);
    l.traverse();
    return 0;
}
