#pragma once
#include "Node.h"

class NumNode : public Node {
protected:

	int numValue;

public:

	NumNode(int& val);
	int Node::getValue();
	void Node::printNode(int h);
};