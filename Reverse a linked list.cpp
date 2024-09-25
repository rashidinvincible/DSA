/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        Node *prev=NULL;
        Node *curr=head;
        while(curr!=NULL)
        {
            Node *newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;
        }
        head=prev;
        return head;
        
    }
};