// Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete(temp);
    }
};
