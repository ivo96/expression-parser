#pragma once

#include "Node.hpp"

class LogNode : public Node {
protected:

	string logOperator;
	Node *numberLog;
	Node *baseLog;

public:

	LogNode();
	~LogNode();
	int Node::getValue();
	void setNumber(Node *num);
	void setBase(Node *bs);
	void Node::printNode(int h);
};
