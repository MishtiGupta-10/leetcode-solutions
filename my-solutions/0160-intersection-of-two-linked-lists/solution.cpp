/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDiff(ListNode* headA, ListNode* headB){
        int lenA = 0; int lenB = 0;
        while(headA != nullptr || headB != nullptr){
            if(headA != nullptr){
                lenA++;
                headA = headA -> next;
            }
            if(headB != nullptr){
                lenB++;
                headB = headB -> next;
            }
        }

        return lenA - lenB;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int diff = getDiff(headA, headB);

        if(diff < 0){
            while(diff++ != 0) headB = headB -> next;
        }
        else{
            while(diff-- != 0) headA = headA -> next;
        }

        while(headA != nullptr){
            if(headA == headB) return headA;
            headA = headA -> next;
            headB = headB -> next;
        }

        return NULL;
    }
};
