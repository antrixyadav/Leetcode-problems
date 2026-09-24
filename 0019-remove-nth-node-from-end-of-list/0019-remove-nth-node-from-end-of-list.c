/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    if (n == count) {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    temp = head;
    for (int i = 1; i < count - n + 1; i++) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}