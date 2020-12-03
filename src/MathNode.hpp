#pragma once

#include "Node.hpp"

class MathNode : public Node {
protected:

	char mathOperator;
	Node *leftMO;
	Node *rightMO;

public:

	MathNode(char& op);
	~MathNode();
	void setLeftMO(Node *left);
	void setRightMO(Node *right);
	virtual int getValue();
	virtual void printNode(int h);
};