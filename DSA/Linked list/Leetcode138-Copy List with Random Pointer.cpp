#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


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


class Solution {

    public:
    
    Node* copyRandomList(Node* head) {
        
        if (!head) return nullptr;
        
        unordered_map<Node*, Node*> cloneMap;
        
        Node* current = head;
        while (current != nullptr) {
            cloneMap[current] = new Node(current->val);
            current = current->next;
        }

        current = head;
        while (current != nullptr) {

            cloneMap[current]->next = cloneMap[current->next];
            cloneMap[current]->random = cloneMap[current->random];
            
            current = current->next;
        }

        return cloneMap[head];
    }
};