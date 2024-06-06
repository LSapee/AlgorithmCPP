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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = nullptr;
        ListNode* tail = nullptr;
        int mn = INT_MAX;
        int n = lists.size();
        vector<int> arr(n,INT_MAX); // 해당 node를 저장할 배열
        for(int i=0; i<lists.size(); i++){
            if(lists[i] != nullptr) {
                arr[i]= lists[i]->val;
                lists[i]=lists[i]->next;
            }
            mn = min(mn,arr[i]);
        }
        int cnt = 0;
        if(mn==INT_MAX) return ans;
        while(cnt!=lists.size()){
            for(int i=0; i<n; i++){
                if(arr[i]==mn){
                    cout<<mn<<" "<<i<<"\n";
                    if(ans==nullptr){
                        ans = new ListNode(arr[i]);
                        tail = ans;
                        if(lists[i]!=nullptr){
                            arr[i] = lists[i]->val;
                            lists[i]=lists[i]->next;
                        }else{
                            arr[i]= INT_MAX;
                        }
                        mn = INT_MAX;
                        break;
                    }else{
                        tail->next = new ListNode(arr[i]);
                        tail= tail->next;
                        if(lists[i]!=nullptr){
                            arr[i] = lists[i]->val;
                            lists[i]=lists[i]->next;
                        }else{
                            arr[i] = INT_MAX;
                        }
                        mn = INT_MAX;
                        break;
                    }
                }
            }
            if(mn==INT_MAX) {
                int tempNum = 0;
                for(int i=0; i<n; i++) {
                    if(lists[i]==nullptr)tempNum++;
                    mn = min(mn,arr[i]);
                }
                cnt = tempNum;
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==INT_MAX)break;
            tail->next = new ListNode(arr[i]);
            tail= tail->next;
        }
        return ans;
    }
};