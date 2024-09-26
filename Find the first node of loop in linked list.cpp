// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head) {
        // your code here
        Node *fast=head;
        Node *slow=head;
        
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow)
            {
                break;
            }
            
        }
        if(fast==NULL)
        {
            return -1;
            
        }
        slow=head;
        while(fast!=slow)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
};