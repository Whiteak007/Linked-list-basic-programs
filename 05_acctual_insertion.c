// // Insertion at between
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head;
// void creation_of_ndoe();
// void LinkedlistTraversal(struct node *travel);
// struct node *at_between(int index, int data, struct node *head);

// int main()
// {
//     int data;
//     int times;
//     printf("Enter no of nodes: ");
//     scanf("%d", &times);
//     creation_of_ndoe(times);
//     LinkedlistTraversal(head);
//     at_between(5, 25, head);
//     return 0;
// }
// void creation_of_ndoe(int nodes_from_main)
// {
//     int data;
//     struct node *temp, *secand_node;

//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data for 1. ndoe: ");
//     scanf("%d", &data);
//     head->data = data;
//     head->next = NULL;

//     temp = head;
//     for (int i = 2; i <= nodes_from_main; i++)
//     {
//         secand_node = (struct node *)malloc(sizeof(struct node));
//         printf("Enter data for %d. node: ", i);
//         scanf("%d", &data);
//         secand_node->data = data;
//         secand_node->next = NULL;

//         temp->next = secand_node;
//         temp = temp->next;
//     }
// }
// void LinkedlistTraversal(struct node *travel)
// {
//     if (head == NULL)
//     {
//         printf("Linked list is not exist...");
//     }
//     else
//     {
//         printf("Your elements is: ");
//         while (travel != NULL)
//         {
//             printf("%d ", travel->data);
//             travel = travel->next;
//         }
//     }
// }
// struct node *at_between(int index, int data, struct node *head)
// {
//     struct node *ptr = (struct ndoe *)malloc(sizeof(struct node));
//     struct node *mover = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         mover = mover->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = mover->next;
//     mover->next  =ptr;
//     return head;
// }

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
struct node *at_between(int index, int data, struct node *head);
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
    secand->next = add_at_between;

    add_at_between->next = third;
    third->data = 114;
    third->next = last;

    last->data = 1114;
    last->next = add_at_end;

    add_at_end->next = NULL;
    linklist_traversal(add);
    add = at_between(2, 500, add);
    linklist_traversal(add);
    return 0;
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
    printf("\n");
    ptr->data = data;
    ptr->next = mover->next;
    mover->next  =ptr;
    return head;
}