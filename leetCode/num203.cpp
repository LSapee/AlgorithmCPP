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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre = NULL;
        ListNode* nxt = NULL;
        ListNode* cur = head;
        while(cur){
            nxt = cur->next;
            if(cur->val == val){
                if(pre) pre->next = nxt;
                else head = nxt;
            }else{
                pre = cur;
            }
            cur = nxt;
        }
        return head;
    }
};