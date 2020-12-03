#pragma once

#include "Node.hpp"

class IfNode : public Node {
protected:

	string ifOperator;
	BoolNode *condition;
	Node *whenTrue;
	Node *whenFalse;

public:

	IfNode();
	~IfNode();
	void setCondition(BoolNode* cond);
	void setTrue(Node *tr);
	void setFalse(Node* fls);
	void Node::printNode(int h);
	int Node::getValue();
};
