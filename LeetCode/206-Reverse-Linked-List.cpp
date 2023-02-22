// https://leetcode.com/problems/reverse-linked-list/

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

// Iteratively

class Solution {
public:
  ListNode* reverseList(ListNode* head) {
    if (head == NULL) return head;
    ListNode *previous = NULL, *nextNode;
    while(head != NULL) {
      nextNode = head -> next;
      head -> next = previous;
      previous = head;
      head = nextNode;
    }
    return previous;       
  }
};

// Recursively

class Solution {
public:
  ListNode* reverseList(ListNode* head) {
    if (head == NULL || head -> next == NULL) return head;
    ListNode* newHead = reverseList(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return newHead;
  }
};