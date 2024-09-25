/* Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};
*/

// Compare two strings represented as linked lists
class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        // Code Here
        Node *temp1=head1;
        Node *temp2=head2;
        int length1=0;
        int length2=0;
        
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            length1++;
        }
        while(temp2!=NULL)
        {
            temp2=temp2->next;
            length2++;
        }
        if(length1>length2)
        return 1;
        else if(length1<length2)
        return -1;
        else if(length1==length2)
        {
           temp1=head1;
           temp2=head2;
        while(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1->data==temp2->data)
            {
            temp1=temp1->next;
            temp2=temp2->next;
            }
            
            else if(temp1->data>temp2->data)
            return 1;
            
            else
            return -1;
            
        }
        return 0;
        }
    }
};