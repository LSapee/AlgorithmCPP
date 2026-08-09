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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* newH = new ListNode();
        ListNode* cur = head;
        while(cur!=NULL){
            ListNode* pre = newH;
            while(pre->next != NULL && pre->next->val <= cur->val)pre= pre->next;
            ListNode* nxt = cur->next;
            cur->next = pre->next;
            pre->next =cur;
            cur = nxt;
        }
        return newH->next;
    }
};