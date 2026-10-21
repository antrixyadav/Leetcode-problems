/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int sum = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        sum = sum * 2 + temp->val;
        temp = temp->next;
    }
    return sum;
}



/*
int getDecimalValue(struct ListNode* head) {
    struct ListNode* temp=head;
    int i=0,sum=0,rev=0;
    while(temp!=NULL)
    {
        sum+=temp->val * pow(10,i);
        temp=temp->next;
        i++;
    }
    while(sum>0)
    {
        int d=sum%10;
        rev=d+rev*10;
        sum/=10;
    }
    i=0;
    while(rev != 0)
    {
        sum+=(rev%10) * pow(2,i);
        i++;
        rev/=10;
    }
    return sum;
}*/