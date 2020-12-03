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
	virtual void printNode(int h);
	virtual int getValue();
};
