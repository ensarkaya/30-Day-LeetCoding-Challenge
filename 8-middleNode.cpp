/**
 * @author: Ensar Kaya
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //# of nodes
        ListNode* curr = head;
        int cnt =0,mid=0;
        for(;curr != NULL; curr=curr->next)
            cnt++;
        mid = (int)(cnt/2);
        mid++;
        curr = head;
        while(mid > 1){
            curr = curr->next;
            mid--;
        }
        return curr;
    }
};
