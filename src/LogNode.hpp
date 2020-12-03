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
	void setNumber(Node *num);
	void setBase(Node *bs);
	virtual int getValue();
	virtual void printNode(int h);
};
