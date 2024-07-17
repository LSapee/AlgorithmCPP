class Solution {
public:
    bool isPalindrome(ListNode* head) {
        deque<int> dq;
        while(head->next!= nullptr){
            dq.push_back(head->val);
            head = head->next;
        }
        dq.push_back(head->val);
        while(dq.size()>1){
            int a = dq.front();dq.pop_front();
            int b = dq.back();dq.pop_back();
            if(a!=b)return false;
        }
        return true;
    }
};