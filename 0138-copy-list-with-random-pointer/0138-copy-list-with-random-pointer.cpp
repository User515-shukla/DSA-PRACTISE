/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;

        // Map: Original Node ka address -> Naye Clone Node ka address
        unordered_map<Node*, Node*> mp;

        // PASS 1: Har original node ka ek naya clone banao aur map mein save karo
        Node* curr = head;
        while (curr != nullptr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // PASS 2: Map ki madad se har clone ke 'next' aur 'random' pointers jodo
        curr = head;
        while (curr != nullptr) {
            // Agar curr->next NULL hai, toh mp[nullptr] automatically nullptr deta hai
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];
            curr = curr->next;
        }

        // Original head ka clone hi hamari nayi list ka head hai
        return mp[head];
    }
};