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

Node* reverseList(Node* head, Node* prev) {
	if (head == nullptr) {
	return prev;
	}
  
	Node* newHead = reverseList(head->next, head);
	head->next = prev;
	return newHead;
}

Node* reverseList(Node* head) {
	return reverseList(head, nullptr);
}