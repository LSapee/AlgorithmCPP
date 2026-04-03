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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return head;
        vector<int> ans;
        while(head!= NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* anshead = new ListNode(ans[0]);
        ListNode* anstail = anshead;
        int n =ans.size();
        for(int i=1; i<n; i++){
            anstail->next = new ListNode(ans[i]);
            anstail = anstail->next;
        }
        return anshead;

    }
};