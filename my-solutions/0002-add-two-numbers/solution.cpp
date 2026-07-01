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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
            int sum = 0;
            int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int digit1 = l1 ? l1 -> val : 0;
            int digit2 = l2 ? l2 -> val : 0;

            int total = digit1 + digit2 + carry;

            sum = total%10;
            carry = total/10;

            ListNode* temp = new ListNode(sum);
            curr -> next = temp;
            curr = curr -> next;

            if(l1 != nullptr) l1 = l1 -> next;
            if(l2 != nullptr) l2 = l2 -> next;
        }

        return dummy -> next;
    }
};
