#include <stdio.h>
#include <stdlib.h>
int times;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *deletion_at_begaining(struct node *head);
void creation_of_LL(int times_from_main);
void LL_display(struct node *show);
int main()
{

    printf("Enter no of nodes: ");
    scanf("%d", &times);
    printf("\t\t\n Creation of Nodes................\n\n");
    creation_of_LL(times);
    printf("\t\t\n Your inserted data in Linked List................\n\n");
    LL_display(head);
    printf("\n");
    printf("\t\t\n Deletion at first...................\n");

    head = deletion_at_begaining(head);
    LL_display(head);
    printf("\n\t\t......THE END.........");

    return 0;
}
void creation_of_LL(int times_from_main)
{
    struct node *temp, *secand_node;
    int data;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for 1 node: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;
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
    }
}
struct node *deletion_at_begaining(struct node *head)
{
    struct node *deleter = head;
    head = head->next;
    free(deleter);
    return head;
}