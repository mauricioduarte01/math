#include <iostream>
#include <string>

class Node {
public:
        std::string val;
	Node* next;

	Node(std::string initialVal) {
        val = initialVal;
        next = nullptr;
	}
};



Node* reverseList(Node* head) {
	Node *current = head;
	Node *prev = nullptr;
  
	while(current != nullptr) {
		Node *temp = current->next;
		current->next = prev;
    
	prev = current;
	current = temp;
	}
	return prev;
}