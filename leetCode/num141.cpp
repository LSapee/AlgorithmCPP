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
    bool hasCycle(ListNode *head) {
        if(head==nullptr)return false;
        set<ListNode*> st;
        st.insert(head);
        while(head->next!=nullptr){
            if(st.find(head->next)!=st.end()){
                return true;
            }
            st.insert(head->next);
            head=head->next;
        }
        return false;
    }
};