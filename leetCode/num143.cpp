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
    void reorderList(ListNode* head) {
        if(!head ||head->next==NULL)return;
        deque<ListNode*> DQ;
        ListNode* A = head;
        while(A!=NULL){
            DQ.push_back(new ListNode(A->val));
            A = A->next;
        }
        ListNode* K = head;
        while(!DQ.empty()){
            auto st = DQ.front(); DQ.pop_front();
            K->val = st->val;
            K = K->next;
            if(!DQ.empty()){
                auto ed = DQ.back(); DQ.pop_back();
                K->val= ed->val;
                K = K->next;
            }
        }
    }
};