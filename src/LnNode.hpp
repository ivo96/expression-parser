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
	virtual int getValue();
	virtual void printNode(int h);
};
