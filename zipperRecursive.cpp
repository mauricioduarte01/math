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

Node* zipperLists(Node* head1, Node* head2) {
	if (head1 == nullptr) {
	return head2;
	}
  
	if (head2 == nullptr) {
	return head1;
	}
  
	head2->next = zipperLists(head1->next, head2->next);
	head1->next = head2;
	 return head1;
}