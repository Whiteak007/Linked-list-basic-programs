#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linklist_traversal(struct node *ptr)
{
    // ptr->next = NULL;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *secand = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    struct node *add = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for first node: ");
    scanf("%d", &add->data);

    struct node *add_at_end = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for last node: ");
    scanf("%d", &add_at_end->data);

    struct node *add_at_between = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for between node node: ");
    scanf("%d", &add_at_between->data);

    // add->data = 5;
    add->next = first;

    first->data = 4;
    first->next = secand;

    secand->data = 14;
    secand->next = third;

    // add_at_between->next = third;
    third->data = 114;
    third->next = last;

    last->data = 1114;
    last->next = add_at_end;

    add_at_end->next = NULL;

    free(add_at_between);
    linklist_traversal(add);
    return 0;
}