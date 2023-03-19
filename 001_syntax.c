#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr);
struct node *add_at_begaining(struct node *head, int data);
int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *secand = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = secand;

    secand->data = 22;
    secand->next = third;

    third->data = 24;
    third->next = last;

    last->data = 30;
    last->next = NULL;

    printf("List before addition: \n");
    traversal(head);
    printf("List after addition: \n");
    head = add_at_begaining(head, 500);
    traversal(head);
    return 0;
}
void traversal(struct node *ptr)
{
    printf("Your linked list data is : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *add_at_begaining(struct node *head, int data)
{
    struct node *adder = (struct node *)malloc(sizeof(struct node));
    adder->next = head;
    adder->data = data;
    return adder;
}