#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
int main(){

    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *tail = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 35;
    head->link = second;

    second->data = 43;
    second->link = third;

    third->data = 19;
    third->link = fourth;

    fourth->data = 65;
    fourth->link = tail;

    tail->data = 38;
    tail->link = NULL;

    while(head != NULL)
    { 
        cout << head->data << endl;
        head = head->link;
    }
    
    return 0;
}