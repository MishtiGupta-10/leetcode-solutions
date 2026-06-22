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
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*, int> NodeMap;

        ListNode* temp = head;

        while(temp != nullptr){
            if(NodeMap.find(temp) != NodeMap.end()){
                return true;
            }

            NodeMap[temp] = 1;

            temp = temp -> next;
        }

        return false;
    }
};
