#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node* ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element: "<< ptr->data<<endl;
        ptr = ptr->next;
    }

}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    //Allocate memory for nodes in the Linked List in Heap
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    forth = (struct Node *) malloc (sizeof(struct Node));

    //Link first and seconf nodes
    head->data=7;
    head->next=second;

    //Link second and thid nodes
    second->data=11;
    second->next=third;

    //Link third and forth nodes
    third->data=12;
    third->next=forth;

    //Terminate the list at the forth node
    forth->data=66 ;
    forth->next=NULL;

    LinkedListTraversal(head);
    return 0;
}