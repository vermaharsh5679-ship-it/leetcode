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
        ListNode dummy(0);
        dummy.next = head; // edge case agr head deleet karna hua to isliye
                           // dummy node banaya taki specail case na likhna pade

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;
        for (int i = 0; i < n; i++) {
            fast = fast->next; // nstep aage badha diya
        }
        while (fast->next != nullptr) {
            slow = slow->next; // ab tortoise an dhare method ka use karke slow
                               // nikal liye
            fast = fast->next;
        } // slow ka agla hi dletion node h us hata do
        slow->next = slow->next->next;
        return dummy.next;
    }
};