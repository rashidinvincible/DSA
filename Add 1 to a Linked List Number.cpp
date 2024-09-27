// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node *reverse(Node *head)
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
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        int carry=1;
        int total=0;
        head=reverse(head);
        Node *temp=head;
        while(temp->next!=NULL)
        {
            total=temp->data+carry;
            int digit=total%10;
            carry=total/10;
            temp->data=digit;
            temp=temp->next;
            if(carry==0)
            break;
        }
        if(carry!=0)
        {
            total=temp->data+carry;
            int digit=total%10;
            carry=total/10;
            temp->data=digit;
            if(carry!=0)
            {
            Node *newnode=new Node(carry);
            temp->next=newnode;
            }
        }
        head=reverse(head);
        return head;
    }
};