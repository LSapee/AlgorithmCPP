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
    int listSize(ListNode* head){
        int ans =0;
        while(head!=NULL){
            ans++;
            head = head->next;
        }
        return ans;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if(head->next ==NULL) return NULL;
        int n = listSize(head);
        ListNode* tail = head;
        ListNode* temp = head;
        int k = n/2;
        int cnt = 0;
        while(cnt<k){
            temp = temp->next;
            cnt++;
            if(cnt==k)break;
            tail = tail->next;
        };
        temp = temp->next;
        tail->next=temp;
        return head;

    }
};