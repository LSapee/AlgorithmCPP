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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode* tail = head;
        ListNode* prev = head;
        while(tail!=NULL){
            int cnt =0;
            int pass = 0;
            while(tail != NULL && cnt <m){
                prev = tail;
                tail = tail->next;
                cnt++;
            }
            while(tail !=NULL && pass<n){
                tail = tail->next;
                pass++;
            }
            prev->next = tail;
        }
        return head;
    }
};