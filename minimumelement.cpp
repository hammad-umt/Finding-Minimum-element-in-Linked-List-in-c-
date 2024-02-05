#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int v)
    {
        this->data=v;
        this->next=NULL;
    }
};
int DisplayMin(Node *head)
{
    int min=head->data;
    Node *current = head;
    while (current!=NULL)
    {
        if (current->data<min)
        {
            min=current->data;
            
        }
        current=current->next;
    }
    return min;   
}
int main()
{
    Node n1(3);
    Node n2(1);
    Node n3(4);
    Node n4(9);
    Node *head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    int min =    DisplayMin(head);
    cout<<"The Minimum Number in Linked List is = "<<min;
}