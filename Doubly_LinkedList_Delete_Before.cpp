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
    void Delete_Before(int num)
    {
        if(start==nullptr)
        {
            cout<<"List is empty"<<"\n";
            return;
        }
        Node *ptr = start;
        while(ptr->data!=num)
        {
            ptr = ptr->next;
        }
        Node *temp = ptr->prev;
        if (temp == start)
        {
            start = ptr;
            start->prev = nullptr;
        }
        else

        {
            temp->prev->next = ptr;
            ptr->prev = temp->prev;
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
    cout << "Original List: "<<"\n";
    l.traverse();
    cout<<"Deletion Before: "<<endl;
    l.Delete_Before(5);
    l.traverse();
    return 0;
}
