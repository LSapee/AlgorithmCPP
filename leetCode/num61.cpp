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

// 이거 아마 원하는건 이게 아닐텐데...
// 이것도  0ms로 해결 가능!
class Solution {
public:
    int findLen(ListNode* head){
        int cnt =0;
        while(head!=NULL){
            cnt++;
            head= head->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)return head;
        int len = findLen(head);
        int move = len-(k%len);
        if(len ==1 || move == len)return head;
        ListNode* newHead = nullptr;
        ListNode* tail =head;
        while(move){
            move--;
            if(newHead==nullptr){
                newHead = new ListNode(head->val);
                head = head->next;
            }else{
                ListNode* temp = newHead;
                ListNode* nxt = new ListNode(head->val);
                head= head->next;
                while(temp->next!=NULL)temp= temp->next;
                temp->next = nxt;
            }
            tail= tail->next;
        }
        ListNode* temp = tail;
        while(temp->next!=NULL)temp=temp->next;
        temp->next = newHead;
        return tail;
    }
};