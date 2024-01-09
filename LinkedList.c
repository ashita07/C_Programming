
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocating memory for nodes int the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth =(struct Node *)malloc(sizeof(struct Node));
    // linking first and second nodes
    head->data = 7;
    head->next = second;
    // linking second and third node
    second->data = 11;
    second->next = third;
    //linking third and fourth
    third->data = 5;
    third->next = fourth;
    //Linking forth to null
    fourth ->data =77;
    fourth ->next =NULL;
  linkedListTraversal(head);
    return 0;
}
