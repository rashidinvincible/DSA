/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    Node *mid(Node *head)
    {
        Node *fast=head;
        Node *slow=head;
        while(fast->next!=NULL)
        {
            fast=fast->next;
            if(fast->next!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    Node *reverse(Node *curr,Node *prev)
    {
        if(curr==NULL)
        return prev;
        
        Node *newnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newnode;
        return reverse(curr,prev);
    }
    bool compare(Node *head1,Node *head2)
    {
        Node *temp1=head1;
        Node *temp2=head2;
        
        while(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1->data==temp2->data)
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(Node *head) {
        // Your code here
        Node *middle=mid(head);
        Node *head2=middle->next;
        middle->next=NULL;
        
        Node *prev=NULL;
        Node *curr=head2;
        
        head2=reverse(curr,prev);
        
        bool ans=compare(head,head2);
        return ans;
        
        
    }
};