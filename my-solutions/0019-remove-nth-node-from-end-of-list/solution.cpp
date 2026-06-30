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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* curr = head;

        while(curr){
            count++;
            curr = curr -> next;
        }

        if(count == n){
            head = head -> next;
            return head;
        }

        int place = count - n -1;
        ListNode* temp = head;
        while(place > 0){
            place --;
            temp = temp -> next;
        }

        ListNode* del = temp -> next;
        temp -> next = del -> next;
        del -> next = nullptr;

        return head;
    }
};
