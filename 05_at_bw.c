#include <stdio.h>
#include <stdlib.h>
int times;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *at_between(int index, int data, struct node *head);
void creation_of_LL(int times_from_main);
void LL_display(struct node *show);
struct node *at_end(int data, struct node *head);
int main()
{

    printf("Enter no of nodes: ");
    scanf("%d", &times);

    printf("\t\t\n Creation of Linked List................\n\n");
    creation_of_LL(times);
    printf("\t\t\n Insertion at first...................\n");
    LL_display(head);

    printf("\t\t\n Insertion at between...................\n");
    head = at_between(3, 500, head);
    LL_display(head);

    printf("\t\t\n Insertion at end...................\n");
    head = at_end(100, head);
    LL_display(head);

    return 0;
}
void creation_of_LL(int times_from_main)
{
    struct node *at_begaining = (struct node *)malloc(sizeof(struct node));
    int add_data;
    printf("Enter data too insert in first node :");
    scanf("%d", &add_data);

    at_begaining->data = add_data;
    at_begaining->next = NULL;

    struct node *temp, *secand_node;
    int data;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for 1 node: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;
    head->next = at_begaining;
    head = at_begaining;
    temp = head;
    for (int i = 2; i <= times; i++)
    {
        secand_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for %d node: ", i);
        scanf("%d", &data);

        secand_node->data = data;
        secand_node->next = NULL;

        temp->next = secand_node;
        temp = temp->next;
    }
}
void LL_display(struct node *show)
{
    if (head == NULL)
    {
        printf("Link list not exixt!!!");
    }
    else
    {
        while (show != NULL)
        {
            printf("%d ", show->data);
            show = show->next;
        }

        printf("\n");
    }
}
struct node *at_between(int index, int data, struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *mover = head;
    int i = 0;
    while (i != index - 1)
    {
        mover = mover->next;
        i++;
    }
    // printf("\n");
    ptr->data = data;
    ptr->next = mover->next;
    mover->next = ptr;
    return head;
}
struct node *at_end(int data, struct node *head)
{
    struct node *ender = (struct node *)malloc(sizeof(struct node));
    struct node *mover = head;
    ender->data = data;

    while (mover->next != NULL)
    {
        mover = mover->next;
    }
    // printf("\n");
    mover->next = ender;
    ender->next = NULL;
    return head;
}