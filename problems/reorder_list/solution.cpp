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
    void reorderList(ListNode* head) {
        std::vector<ListNode*> vec;
        
        while(head != nullptr) {
            vec.push_back(head);
            head = head->next;
        }
        
        int start =0, end = vec.size()-1;
        while(start < end) {
            std::cout<<start<<"\n";
            vec[start]->next = vec[end];
            vec[end]->next = vec[start+1];
            start++;
            end--;
        }
        
        vec[vec.size()/2]->next = nullptr;
    }
};