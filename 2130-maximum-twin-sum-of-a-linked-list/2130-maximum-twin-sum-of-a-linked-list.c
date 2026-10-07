/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    int arr[100000];
    int n = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        arr[n] = temp->val;
        n++;
        temp = temp->next;
    }
    int max = 0;
    for (int i = 0; i < n / 2; i++) {
        int sum = arr[i] + arr[n - i - 1];
        if (sum > max)
            max = sum;
    }
    return max;
}