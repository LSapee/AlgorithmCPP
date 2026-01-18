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
    vector<int> arr;
    void makeArr(ListNode* head){
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        makeArr(head);
        int n = arr.size();
        for(int i=0; i<n; i=i+k){
            int st= i;
            int ed = i+(k-1);
            if(ed<n){
                while(st<ed){
                    swap(arr[st],arr[ed]);
                    ed--;
                    st++;
                }
            }
        }
        ListNode* prev = new ListNode(arr[0]);
        ListNode* curr = prev;
        for(int i=1; i<n; i++){
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return prev;
    }
};