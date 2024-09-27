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
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int count=1;
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow)
            break;
        }
        if(fast==NULL)
        return 0;
        slow=head;
        
            while(fast!=slow)
            {
                slow=slow->next;
                fast=fast->next;
                
            }
            Node *length=slow->next;
            while(length!=slow)
            {
                count++;
                length=length->next;
            }
            return count;
            
        
    }
};