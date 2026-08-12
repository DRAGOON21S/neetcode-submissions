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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        // ListNode* ans = head;
        int total = 0;
        while(curr){
            total++;
            curr=curr->next;
        }
        n=total-n;
        curr=head;
        // cout << n <<"\n";
        // cout << curr->val;
        if (n == 0) {
            return head->next;
        }
        for(int i = 0; i<n;i++){
            if(i==n-1){
                ListNode* temp = curr;
                curr=curr->next;
                temp->next=curr->next;
                return head;

            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
