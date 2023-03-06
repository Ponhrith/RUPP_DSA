#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

int main()
{
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *last = NULL;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    first->data = 43;
    first->prev = NULL;
    first->next = second;

    second->data = 26;
    second->prev = first;
    second->next = third;

    third->data = 19;
    third->prev = second;
    third->next = fourth;

    fourth->data = 22;
    fourth->prev = third;
    fourth->next = last;

    last->data = 38;
    last->prev = fourth;
    last->next = NULL;

    while(first != NULL){
        cout << first->data << endl;
        first = first->next;
    }
    cout << endl;
    
    while(last != NULL){
        cout << last->data << endl;
        last = last->prev;
    }

    return 0;
}