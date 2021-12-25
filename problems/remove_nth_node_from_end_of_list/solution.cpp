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
        
        if(head->next == nullptr) return nullptr;
        if(head->next->next == nullptr) {
            if(n==1) {
                head->next = nullptr;
                return head;
            }
            if(n==2) {
                head = head->next;
                return head;
            }
        }
        
        ListNode* slow = head;
        ListNode* mid = head->next->next;
        ListNode* fast = head;
        
        int i=n;
        while(i>=1) { // n-1 elements betweeen slow and fast
            fast = fast->next;
            i--;
        }
        
        if(fast == nullptr)// n = sz
        {
            head = head->next;
            return head;
        }
        
        while(fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
            mid = mid->next;
        }
        
        slow->next = mid;
        
        return head;
    }
};