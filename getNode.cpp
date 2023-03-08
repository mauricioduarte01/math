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

std::string getNodeValue(Node* head, int idx) {
	Node* current = head;
	int count = 0;
	while (current != nullptr) {
	
	if (count == idx) {
    	    return current->val;
	}
	current = current->next;
	count += 1;
  }
	return "";
}

