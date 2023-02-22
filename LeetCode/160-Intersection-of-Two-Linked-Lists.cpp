/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 1. Brute Force

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *headAcopy = headA;
    while(headAcopy != NULL) {
      ListNode *headBcopy = headB;
      while(headBcopy != NULL) {
        if (headAcopy == headBcopy) return headAcopy;
        headBcopy = headBcopy -> next;
      }
      headAcopy = headAcopy -> next;
    }
    return NULL;
  }
};

// 2. HashMap solution

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    map<ListNode*, int> mp;
    while(headA != NULL) {
      ++mp[headA];
      headA = headA -> next;
    }
    while(headB != NULL) {
      if (mp[headB] > 0) return headB;
      headB = headB -> next;
    }
    return NULL;
  }
};