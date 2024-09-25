/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int count=0;
        Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                count++;
                
            }
            temp=temp->next;
        }
        return count;
    }
};