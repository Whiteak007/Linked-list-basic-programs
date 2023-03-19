// #include <stdio.h>
// #include <stdlib.h>
// int times;
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head;
// struct node *deletion_at_betweem(struct node *head, int counter);
// void creation_of_LL(int times_from_main);
// void LL_display(struct node *show);
// int main()
// {

//     printf("Enter no of nodes: ");
//     scanf("%d", &times);
//     printf("\t\t\n Creation of Nodes................\n\n");
//     creation_of_LL(times);
//     printf("\t\t\n Your inserted data in Linked List................\n\n");
//     LL_display(head);
//     printf("\n");

//     printf("\t\t\n Deletion at between...................\n");
//     head = deletion_at_betweem(head, 2);
//     LL_display(head);
//     printf("\n\t\t......THE END.........");

//     return 0;
// }
// void creation_of_LL(int times_from_main)
// {
//     struct node *temp, *secand_node;
//     int data;
//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data for 1 node: ");
//     scanf("%d", &data);

//     head->data = data;
//     head->next = NULL;
//     temp = head;
//     for (int i = 2; i <= times; i++)
//     {
//         secand_node = (struct node *)malloc(sizeof(struct node));
//         printf("Enter data for %d node: ", i);
//         scanf("%d", &data);

//         secand_node->data = data;
//         secand_node->next = NULL;

//         temp->next = secand_node;
//         temp = temp->next;
//     }
// }
// void LL_display(struct node *show)
// {
//     if (head == NULL)
//     {
//         printf("Link list not exixt!!!");
//     }
//     else
//     {
//         while (show != NULL)
//         {
//             printf("%d ", show->data);
//             show = show->next;
//         }
//     }
// }
// struct node *deletion_at_betweem(struct node *head, int counter)
// {
//     struct node *mover = head;
//     struct node *deleter_node;
//     int i = 0;
//     while (i != counter - 1)
//     {
//         mover = mover->next;
//         i++;
//     }
//     deleter_node = mover->next;
//     mover->next = deleter_node->next;
//     free(deleter_node);
//     return head;
// }

#include <stdio.h>
#include <stdlib.h>
int times;
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *deletion_at_betweem(struct node *head, int counter);
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

    printf("\t\t\n Deletion at between...................\n");
    head = deletion_at_betweem(head, 2);
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
struct node *deletion_at_betweem(struct node *head, int counter)
{
    struct node *mover = head;
    struct node *deleter_node;
    deleter_node = mover->next;
    int i = 0;
    while (i != counter - 1)
    {
        mover = mover->next;
        deleter_node = deleter_node->next;
        i++;
    }
    mover->next = deleter_node->next;
    free(deleter_node);
    return head;
}