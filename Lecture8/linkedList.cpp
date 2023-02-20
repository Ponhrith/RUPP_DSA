#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data,data1;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    struct node *tail = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));
    head->data = 8;
    head->link = tail;
    tail->data1 = 15;
    tail->link = NULL;
    cout << head->data << endl;
    cout << tail->data1;
    return 0;
}