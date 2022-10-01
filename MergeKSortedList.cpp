class Solution {
public:
    ListNode * sortLists(ListNode * l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode * l = nullptr;
        ListNode * ret = nullptr;
        if(l2->val <= l1->val){
            l = l2; 
            l2 = l2->next;
        }else{
            l = l1;
            l1 = l1->next;
        }
        ret = l;
        while(l1 && l2){
            if(l2->val <= l1->val){
                l->next = l2; 
                l2 = l2->next;
            }else{
                l->next = l1;
                l1 = l1->next;
            }
            l = l->next;
        }
        if(l1 || l2){
            if(l1){
                l->next = l1;
            }else{
                l->next= l2;
            }
        }
        return ret;
        
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * ret = nullptr;
        for(int i = 0; i < lists.size(); ++i){
            ListNode * temp = lists[i];
            ret = sortLists(ret,temp);
        }
        return ret;
    }
};
