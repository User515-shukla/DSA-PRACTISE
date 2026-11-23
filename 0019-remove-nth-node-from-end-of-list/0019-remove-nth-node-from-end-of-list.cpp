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
        dummy.next=head;
        ListNode* fast=&dummy;
        ListNode* slow=&dummy;
        for(int i=0; i<n+1;i++){
            fast=fast->next;
        }
        while(fast!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* Delete=slow->next;
        slow->next=slow->next->next;
        delete Delete;
        return dummy.next;

    }
};
// Ek dummmy node banao aur head pe set karo
// two pointer banao ek fast and slow pointer banao aur usko dummy pe point karo
// ek fixed gap create karo (n+1) taaki fast and slow ke bich gap ban sake (isme ek loop chalao i=0 to n tak) aur fast ko move karte jao
// fast and slow pointer ko ek sath move karo jab tak fast null pointer tak hit na ho jaaye
// ek listnode delete banao jo ki slow next ke equal ho aur wo slow next apne next ko point kare phir delete karo 
// uske baad return kardo dummy.next