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
    ListNode* partition(ListNode* head, int x) {
        ListNode smalldummy(0);
        ListNode bigdummy(0);
        ListNode* smallTail=&smalldummy;
        ListNode* bigTail=&bigdummy;
        while(head!=nullptr){
            if(head->val<x){
                smallTail->next=head;
                smallTail=smallTail->next;
            }
            else{
                bigTail->next=head;
                bigTail=bigTail->next;

            }
            head=head->next;
        }
        bigTail->next=nullptr;
        smallTail->next=bigdummy.next;
        return smalldummy.next;
        
    }
};
// do dummy node banao and 2 dummy tail bhi aur usme pointer shaamil karo
// jab tak head null ptr tak nhi pahuch jaata 
  // agar head ka value less than x hai to small tail next ko head karo phir small tail equal uska next ho jayega
  //  aur else me bigtail wala same situation.
// phir head ko head next karo
// ab bigtail ko dummy karo isse infinite loop banane se bach jayega 
// small tail ko bigdummy next se jor do
// ab return kardo small dummy next  