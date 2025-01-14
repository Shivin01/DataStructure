#include <iostream>
#include <map>
using namespace std;

// NOTE: Middle of a LinkedList [TortoiseHare Method] sol: https://takeuforward.org/data-structure/find-middle-element-in-a-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
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
    ListNode* middleNode(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        int currentCount = 1;
        int middleCount = 0;

        ListNode* temp = head;
        ListNode* middleNode = head;

        while(temp!=NULL) {
            int mid = (currentCount/2)+1;

            while(middleCount < mid-1) {
                middleNode = middleNode->next;
                middleCount++;
            }
            temp = temp->next;
            currentCount++;
        }
        return middleNode;
    }
};

