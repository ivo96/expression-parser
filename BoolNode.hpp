#pragma once

#include "Node.hpp"

class BoolNode : public Node
{
public:
	BoolNode(const char& op);
	~BoolNode();
	void setLeftBO(Node* left);
	void setRightBO(Node* right);
	void Node::printNode(int h);
	int Node::getValue();

private:
	char boolOperator;
	Node* leftBO;
	Node* rightBO;
};