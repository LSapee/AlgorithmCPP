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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return head;
        queue<ListNode*> Q;
        Q.push(head);
        vector<int> arr(1000,0);
        while(!Q.empty()){
            auto cur= Q.front();Q.pop();
            arr[cur->val +500]++;
            if(cur->next!=NULL) Q.push(cur->next);
        }
        ListNode* ans = new ListNode();
        ListNode* tail = ans;
        for(int i=0;i<1000; i++){
            if(arr[i]==1){
                tail->next = new ListNode(i-500);
                tail = tail->next;
            }
        }
        return ans->next;
    }
};