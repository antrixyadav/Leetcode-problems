/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) 
{
    struct ListNode* temp = node->next;
    struct ListNode* curr = node;
    curr->val = temp->val;
    curr->next = temp->next;
    temp->next = NULL;
    free(temp);
}