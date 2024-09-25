// User function Template for C++

class Solution {
  public:
    // Function to insert a node at the begining of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        // Code here
        if (head==NULL)
        {
            Node *newnode=new Node(x);
            head=newnode;
            return head;
        }
        Node *newnode = new Node(x);
        newnode->next=head;
        head=newnode;
        return head;
    }
};