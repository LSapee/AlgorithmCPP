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
    string gameResult(ListNode* head) {
        int O =0;
        int E =0;
        while(head!=NULL){
            int e = head->val;
            int o = head->next->val;
            if(e>o)E++;
            else O++;
            head = head->next->next;
        }
        if(O==E)return "Tie";
        return O>E ? "Odd" : "Even";
    }
};