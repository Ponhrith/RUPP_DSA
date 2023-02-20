#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
int main(){

    struct node *head = NULL;
    struct node *tail = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 8;
    head->link = tail;

    tail->data = 15;
    tail->link = NULL;

    while(head != NULL)
    {
        cout << head->data << endl;
        head = head->link;
    }
    
    return 0;
}