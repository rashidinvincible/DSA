// User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  Node *rev(Node *head)
  {
      Node *curr=head;
      Node *prev=NULL;
      while(curr!=NULL)
      {
          Node *newnode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=newnode;
          
      }
      return prev;
  }
    Node *reverse(Node *head, int k) {
        // code here
        Node *curr=head;
      
        while(k!=1)
        {
            
            curr=curr->next;
            k--;
        }
        Node *head2=curr->next;
        curr->next=NULL;
        head=rev(head);
        head2=rev(head2);
       Node *temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=head2;
        return head;
        
        
    }
};