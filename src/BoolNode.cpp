#include "BoolNode.hpp"

BoolNode::BoolNode(const char& op)
	: boolOperator(op)
{
	leftBO = nullptr;
	rightBO = nullptr;
}
void BoolNode::setLeftBO(Node* left)
{
	leftBO = left;
}

void BoolNode::setRightBO(Node* right)
{
	rightBO = right;
}

int BoolNode::getValue()
{
	switch (boolOperator)
	{
	case '<':
		return leftBO->getValue() < rightBO->getValue();
		break;
	case '>':
		return leftBO->getValue() > rightBO->getValue();
		break;
	case '=':
		return leftBO->getValue() == rightBO->getValue();
		break;
	default:
		break;
	}
}

void BoolNode::printNode(int h)
{
	rightBO->printNode(h + 1);
	for (int i = 0; i < h; i++)
	{
		cout << "\t";
	}
	cout << boolOperator << endl;
	leftBO->printNode(h + 1);
}


BoolNode::~BoolNode()
{
	delete leftBO;
	delete rightBO;
}
