#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

Node* reverseDLL(Node* head)
{   
    // Write your code here   
    if(head == NULL || head->next==NULL) return head;
    Node* current = head;
    Node* last = NULL;

    while(current != NULL) {
        Node* temp = current->next;
        current->prev = current->next;
        current->next = last;
        last = current;
        current = temp;
    }
    return last;
}