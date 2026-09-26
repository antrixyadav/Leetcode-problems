/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp=head;
    int i=1,m=1;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(i%2==0)
        i=(i/2);
    else
        i=(i/2)+1;
    temp=head;
    while(m!=i)
    {
        temp=temp->next;
        m++;
    }  
    head=temp;
    return head; 
}