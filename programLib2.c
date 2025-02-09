#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;           
    struct node *next;  
};

//typedef struct node NODE;
//typedef struct node * PNODE;
//typedef struct node ** PPNODE;

void DeleteFirst(PPNODE head)
{
    // If LL is empty then return
    // If LL contains atleast one node then
    // Store the address of second node in the first pointer through head
    // And delete the fisrt node
    PNODE temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else        // LL contains atleast one node
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    // If LL is empty then return
    // If LL contains one node then delete that node and return
    // If LL contains more than one node then travel till second last node and delete last node

    PNODE temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else if((*head) -> next == NULL) // LL contains one node
    {
            free(*head);
            *head = NULL;
    }
    else    // LL contains more than one node
    {
            temp = *head;
           while(temp->next->next != NULL)
           {
                temp = temp -> next;
           }

           free(temp->next);
           temp->next = NULL;
    }
}

