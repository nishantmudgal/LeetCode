/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, bool carry = false) {
        if (l1 == NULL || l2 == NULL) {
            if (l1 == NULL) l1 = l2;

            if(carry) {
                if (l1 == NULL)
                    return new ListNode(1);
                else {
                    int sum = l1->val + int(carry);
                    l1->val = sum%10;
                    l1->next = addTwoNumbers(l1->next, NULL, sum > 9);
                    return l1;
                }
            }
            else {
                return l1;
            }
        }

        int sum = (l1->val + l2->val + int(carry));
        l1->val = sum%10;
        l1->next = addTwoNumbers(l1->next, l2->next, sum > 9);

        return l1;
    }
};