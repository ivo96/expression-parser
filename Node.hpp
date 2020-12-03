#pragma once
#include <string>
#include <iostream>
#include <cmath>

using namespace std;
class BoolNode;
class Node
{
protected:

public:
	virtual void printNode(int h) = 0;			// pure virtual 
	virtual int getValue() = 0;
	virtual void setLeftMO(Node* left) {}
	virtual void setRightMO(Node* right) {}
	virtual void setNumberLn(Node* num) {}
	virtual void setNumber(Node *num) {}
	virtual void setBase(Node *bs) {}
	virtual void setCondition(BoolNode* cond) {}
	virtual void setTrue(Node *tr) {}
	virtual void setFalse(Node* fls) {}
};