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
class Solution {
public:

    int getLength(ListNode *head) {
        int len = 0;

        while(head != NULL) {
            len++;
            head = head -> next;
        }

        return len;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int len  = getLength(head);

        if(head == NULL || k > len){
            return head;
        }
        
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;
        int cnt = 0;
        while(curr != NULL && cnt < k ) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }

        if(next != NULL)
            head -> next = reverseKGroup(next, k);
        
        return prev;
    }
};
