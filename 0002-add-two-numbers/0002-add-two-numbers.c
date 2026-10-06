struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* head = NULL;
    struct ListNode* temp = NULL;
    int extra = 0;
    while(l1 != NULL || l2 != NULL || extra != 0)
    {
        int sum = extra;
        if(l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;
        if(head == NULL)
            head = node;
        else
            temp->next = node;
        temp = node;
        extra = sum / 10;
    }
    return head;
}