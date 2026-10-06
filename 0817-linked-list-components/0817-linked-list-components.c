/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {
    struct ListNode* temp = head;
    int store = 0;
    int previous = 0;
    while (temp != NULL) {
        int found = 0;
        for (int i = 0; i < numsSize; i++) {
            if (temp->val == nums[i]) {
                found = 1;
                break;
            }
        }
        if (found && previous == 0)
            store++;

        previous = found;
        temp = temp->next;
    }
    return store;
}