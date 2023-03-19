// #include <stdio.h>
// #include <stdlib.h>
// int store_linkedlist_data[5];
// struct Laptop
// {
//     int data;
//     struct Laptop *link;
// };

// void Linklist_print(struct Laptop *ptr);
// struct Laptop *insertion_At_begaining(int data, struct Laptop *head);
// int main()

// {

//     struct Laptop *head, *secand, *third, *fourth;

//     head = (struct Laptop *)malloc(sizeof(struct Laptop));
//     secand = (struct Laptop *)malloc(sizeof(struct Laptop));
//     third = (struct Laptop *)malloc(sizeof(struct Laptop));
//     fourth = (struct Laptop *)malloc(sizeof(struct Laptop));

//     head->data = 4;
//     head->link = secand;

//     secand->data = 14;
//     secand->link = third;

//     third->data = 5;
//     third->link = fourth;

//     fourth->data = 24;
//     fourth->link = NULL;
//     Linklist_print(head);
//     return 0;
// }

// void Linklist_print(struct Laptop *ptr)
// {
//     printf("DAta = ");
//     while (ptr!=NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr=ptr->link;
//     }

// }
// struct Laptop *insertion_At_begaining(int data, struct Laptop *head)
// {
//     struct Laptop *ptr = (struct Laptop*)malloc*sizeof(struct Laptop);
//     ptr->link = head;
//     ptr->data = data;
//     return ptr;

// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    printf("Your data is : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *addition_at_begaining(struct node *head, int data)
{
    struct node *add_data = (struct node *)malloc(sizeof(struct node));
    add_data->next = head;
    add_data->data = data;
    return add_data;
}
int main()
{
    int data;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *secand = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for 1st node: ");
    scanf("%d", &head->data);
    head->next = secand;

    printf("Enter data for 2nd node: ");
    scanf("%d", &secand->data);
    secand->next = last;

    printf("Enter data for 3rd node: ");
    scanf("%d", &last->data);
    last->next = NULL;
    traversal(head);
    addition_at_begaining(head, 65);
    return 0;
}