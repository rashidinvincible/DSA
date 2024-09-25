/* Link list Node
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
    /* Function to delete a node from a linked list */
    int len(Node *&head)
    {
        Node *temp=head;
        int length=0;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        return length;
    }
    Node* deleteNode(Node* head, int x) {
        // cdoe here
        Node *curr=head;
        Node *prev=NULL;
        int length=len(head);
        if(head==NULL)
        return NULL;
        if(x==1)
        {
            Node *temp=head;
            
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        
        else
        {
           
            while(x!=1)
            {
                prev=curr;
                curr=curr->next;
                x--;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
            return head;
        }
      
        
        
    }
};