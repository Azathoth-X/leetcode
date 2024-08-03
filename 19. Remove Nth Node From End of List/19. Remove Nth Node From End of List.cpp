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
        ListNode* cur=head;
        ListNode* curm=head;
        ListNode* curn=head;
        for (int i =0;i<n;i++){
            curn=curn->next;
        }
        if(curn==nullptr){
            head=head->next;
            return head;
        }
        while(curn!=nullptr){
            cur=curm;
            curm=curm->next;
            curn=curn->next;
        }
        cur->next=curm->next;
        return head;
    }
};