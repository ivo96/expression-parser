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
	int Node::getValue();
	void Node::printNode(int h);
};