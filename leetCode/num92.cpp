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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        vector<int> temp;
        ListNode* tmp = head;
        ListNode* K = head;
        while(tmp){
            temp.push_back(tmp->val);
            tmp = tmp->next;
        }
        int st =left-1;
        int ed = right-1;
        while(st<ed){
            swap(temp[st],temp[ed]);
            st++;
            ed--;
        }
        int index =0;
        while(K){
            K->val = temp[index];
            index++;
            K= K->next;
        }
        return head;
    }
};