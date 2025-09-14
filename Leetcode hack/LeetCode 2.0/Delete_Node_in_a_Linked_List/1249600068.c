/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    if(node->next == NULL || node == NULL) 
    return;

    struct ListNode *temp = node ->next;
    node->val = temp->val;
    node->next = temp->next;
    free(temp);
}