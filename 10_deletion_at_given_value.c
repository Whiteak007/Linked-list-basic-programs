#include <stdio.h>
#include <stdlib.h>
int times;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *deletion_At_given_value(struct node *head, int value);
void creation_of_LL(int times_from_main);
void LL_display(struct node *show);
int main()
{

    int index;
    printf("Enter no of nodes: ");
    scanf("%d", &times);
    printf("\t\t\n Creation of Nodes................\n\n");
    creation_of_LL(times);
    printf("\t\t\n Your inserted data in Linked List................\n\n");
    LL_display(head);
    printf("\n");

    printf("Enter your index you want to delete: ");
    scanf("%d", &index);
    printf("\t\t\n Deletion at given value...................\n");
    head = deletion_At_given_value(head,index );
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

struct node *deletion_At_given_value(struct node *head, int value)
{
    struct node *mover = head;
    struct node *at_value = head->next;
    while (at_value->data!=value && at_value->next!=NULL)
    {
        mover = mover->next;
        at_value = at_value->next;
    }

    if (at_value->data == value)
    {
        mover->next = at_value->next;
        free(at_value);
    }
    return head;
}