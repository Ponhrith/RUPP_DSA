// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
// };

// void insertBegin(Node** head, int data){

//     Node* new_node = new Node();

//     // assign data
//     new_node->data = data;
    
//     // change the next node of this newNode 
//     // to current head of Linked List
//     new_node->next = *head;

//     // new_node should become the new head of Linked List
//     *head = new_node;
    
//     cout << "Inserted Item: " << new_node->data << endl;
// }

// void printList(Node* node){
    
//     cout << "\nLinked List : " ;
    
//     //as linked list will end when Node is Null
//     while(node!=NULL){
//         cout << node->data << " "; node = node->next;
//     }
//     cout << endl;
// }

// int main(){

//     Node* head = NULL;

//     insertBegin(&head,4);
//     insertBegin(&head,5);
//     insertBegin(&head,6);
//     insertBegin(&head,7);
//     insertBegin(&head,8);
//     insertBegin(&head,9);

//     printList(head); 
    
//     return 0;  
// }

#include<iostream>
using namespace std;

class Node {  // Node class
    public:
        int data;
        Node* next;
};

class LinkedList {  // Singly Linked List class
    public:
        Node* head;  // head node
        LinkedList() {  // constructor to initialize head to null
            head = NULL;
        }
        void insertBegin(int x) {  // method to insert element at the beginning
            Node* newNode = new Node;
            newNode->data = x;
            newNode->next = head;
            head = newNode;
        }
        void printList() {  // method to print the linked list
            Node* temp = head;
            while(temp != NULL) {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
};

int main() {
    LinkedList list;
    list.insertBegin(5);  // adding elements using insertBegin method
    list.insertBegin(10);
    list.insertBegin(15);
    list.printList();  // printing the linked list
    return 0;
}