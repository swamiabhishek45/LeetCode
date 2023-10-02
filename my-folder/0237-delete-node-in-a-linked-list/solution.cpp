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

        // copying node ke next ki val in node
        node -> val = node -> next -> val;

        // pointing node ka next to node ke next ka next;
        node -> next = node -> next -> next;

    }
};
