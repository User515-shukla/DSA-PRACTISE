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
        
         ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;
        
        // Continue looping if l1 has nodes, l2 has nodes, OR there is a carry left over
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            
            // Add l1's value if it's not null, then advance l1
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            // Add l2's value if it's not null, then advance l2
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            // Calculate the new carry (e.g., 18 / 10 = 1)
            carry = sum / 10;
            
            // Create the new node with the single digit (e.g., 18 % 10 = 8)
            current->next = new ListNode(sum % 10);
            
            // Move the current pointer forward
            current = current->next;
        }
        
        // Store the actual head of the resulting list
        ListNode* result = dummyHead->next;
        
        // Clean up the dynamically allocated dummy node to prevent memory leaks
        delete dummyHead; 
        
        return result;
    }
};