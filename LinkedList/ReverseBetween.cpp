#include <iostream>
#include <map>
using namespace std;

// https://leetcode.com/problems/reverse-linked-list-ii/submissions/1409442421/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;

        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* tail = NULL;
        ListNode* storeHead = NULL;
        int count = 1;

        ListNode* newHead = NULL;
        while(temp!=NULL) {            
            ListNode* front = temp->next;
            if(count > right) {
                break;
            }
            if (count < left) {
                storeHead = temp;
            }            
            if (count >= left && count <= right) {
                if (newHead == NULL) 
                    { 
                        prev = temp;
                        newHead = temp;
                    }
                else 
                    {                        
                        temp->next = newHead;
                        newHead=temp;
                    }
            }
            
            temp = front;
            count++;
        }
        if (left > 1) {
        storeHead->next=newHead;
        prev->next=temp;
        } else {
            head = newHead;
            prev->next=temp;
        }
        return head;
    }
};