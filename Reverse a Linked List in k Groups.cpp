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
    int length(ListNode *head)
    {
        ListNode *temp=head;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        if(head->next==NULL)
        {
            return head;
        }
        int len=length(head);
        if(len<k)
        {
            return head;
        }
        ListNode *prev=NULL;
        ListNode *curr=head;
        int pos=0;
        while(pos<k)
        {
            ListNode *newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;
            pos++;
        }
        if(curr!=NULL)
        {
            ListNode *ans=NULL;
            ans=reverseKGroup(curr,k);
            head->next=ans;
            
        }
        return prev;
    }
};