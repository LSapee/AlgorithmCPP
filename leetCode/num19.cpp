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
        ListNode* ans = nullptr;
        ListNode* tail = nullptr;
        int ListNodeSize =0;
        ListNode* temp = head;
        while(temp!=nullptr){
            temp= temp->next;
            ListNodeSize++;
        }
        int pass = ListNodeSize-n;
        int cnt =0;
        while(head!=nullptr){
            if(cnt==pass){
                head=head->next;
                cnt++;
                continue;
            }
            if(ans==nullptr){
                ans = new ListNode(head->val);
                head=head->next;
                tail = ans;
                cnt++;
            }else{
                tail->next = new ListNode(head->val);
                tail = tail->next;
                head=head->next;
                cnt++;
            }
        }
        return ans;
    }
};