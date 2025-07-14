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
    int getDecimalValue(ListNode* head) {
        string s = "";
        while(head!=NULL){
            s+= to_string(head->val);
            head = head->next;
        }
        int n = s.size();
        reverse(s.begin(),s.end());
        int ans = s[0] == '0' ? 0 :1;
        int t = 2;
        for(int i=1; i<n; i++){
            ans += s[i] == '1' ? t : 0;
            t*=2;
        }
        return ans;
    }
};