/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
class Solution {
  public:
    int modularNode(Node *head, int k) {
        // Code here
        if(head==NULL)
        return -1;
        int ans=0;
        int length=1;
        Node *temp=head;
        while(temp!=NULL)
        {
          if(length%k==0)
          {
              ans=temp->data;
              temp=temp->next;
              length++;
          }
          else
          {
          temp=temp->next;
          length++;
          }
        }
        if(ans==0)
        return -1;
        return ans;
     
        
    }
};