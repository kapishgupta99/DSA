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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        int i=0;
        ListNode *temp=head;
        temp=head;
        
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        while(i<len/2){
            head=head->next;
            i++;
        }
        return head;

        
    }
};