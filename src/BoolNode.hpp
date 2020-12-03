#pragma once

#include "Node.hpp"

class BoolNode : public Node
{
public:
	BoolNode(const char& op);
	~BoolNode();
	void setLeftBO(Node* left);
	void setRightBO(Node* right);
	virtual void printNode(int h);
	virtual int getValue();

private:
	char boolOperator;
	Node* leftBO;
	Node* rightBO;
};