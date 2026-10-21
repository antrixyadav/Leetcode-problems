/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* curr=head;
    struct ListNode* nextt;
    while (curr != NULL && curr->val == val) 
    {
        head = curr->next;
        free(curr);
        curr = head;
    }
    while (curr != NULL && curr->next != NULL)
    {
        nextt=curr->next;
        if(nextt->val == val)
        {      
            curr->next = nextt->next;
            free(nextt);
        }
        else
            curr=curr->next;
    }
    return head;
}