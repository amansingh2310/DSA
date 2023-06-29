#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
}*head;

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last=head;

    for(i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(Node *p)
{
    do {
        cout<<p->data<<" ";
        p = p->next;
    }
    while(p != head);
}

int main()
{
    int A[] = {1, 12, 23, 35};
    create(A, 4);
    display(head);
    return 0;
}