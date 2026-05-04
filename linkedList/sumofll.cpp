int sumList(ListNode* head) {
    int sum = 0;

    while (head) {
        sum += head->val;
        head = head->next;
    }

    return sum;
}