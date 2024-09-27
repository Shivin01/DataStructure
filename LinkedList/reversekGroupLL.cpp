#include<iostream>
#include<vector>

using namespace std;

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

class Node {
  public:
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
 };

 Node* reverseLL(Node* head) {
     Node* temp = head;
     Node* prev = nullptr;
     while(temp) {
         Node* front = temp->next;
         temp->next = prev;
         prev = temp;
         temp = front;
     }
    return prev;
 } 

 Node* getKthElement(Node* temp, int k) {
     k -= 1;
     while (temp && k>0) {
         temp = temp->next;
         k--;
     }
     return temp;
 }

Node* kReverse(Node* head, int k) {

    Node* temp = head;
    Node* prevElement = nullptr;

    while (temp) {        
        Node* kthElement = getKthElement(temp, k);
        if (kthElement == nullptr) {
            if (prevElement) prevElement->next = temp;
            break;
        }

        Node* nextElement = kthElement->next;
        kthElement->next = nullptr;

        reverseLL(temp);

        if (temp == head) {
            head = kthElement;
        } else {
            prevElement->next = kthElement;
        }

        prevElement = temp;
        temp = nextElement;
    }

    return head;
}