#pragma once
#include "Node.hpp"

class NumNode : public Node {
protected:

	int numValue;

public:

	NumNode(int& val);
	virtual int getValue();
	virtual void printNode(int h);
};