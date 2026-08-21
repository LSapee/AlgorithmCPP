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
    ListNode* frequenciesOfElements(ListNode* head) {
        map<int,int> mp;
        while(head!=NULL){
            mp[head->val]++;
            head = head->next;
        }
        ListNode* ans = new ListNode();
        ListNode* tail = ans;
        for(auto a: mp){
            tail->next =new ListNode(a.second);
            tail= tail->next;
        }
        return ans->next;
    }
};