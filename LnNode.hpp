#pragma once

#include "Node.hpp"

class LnNode : public Node {
protected:

	string lnOperator;
	Node *numberLn;

public:

	LnNode();
	~LnNode();
	void setNumberLn(Node* num);
	int Node::getValue();
	void Node::printNode(int h);
};
