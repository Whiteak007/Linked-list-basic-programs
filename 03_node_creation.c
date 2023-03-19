#include <stdio.h>
#include <stdlib.h>
int times;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void creation_of_LL(int times_from_main)
{
    struct node *at_begaining = (struct node *)malloc(sizeof(struct node));
    int add_data;
    printf("Enter data for addition node:");
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
    }
}
int main()
{

    printf("Enter no of nodes: ");
    scanf("%d", &times);
    creation_of_LL(times);
    LL_display(head);
    return 0;
}