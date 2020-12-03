#include "MathNode.hpp"

MathNode::MathNode(char& op)
	: mathOperator(op), leftMO(NULL), rightMO(NULL)
{

}
MathNode::~MathNode()
{
	delete leftMO;
	delete rightMO;
}

void MathNode::setLeftMO(Node *left)
{
	leftMO = left;
}

void MathNode::setRightMO(Node *right)
{
	rightMO = right;
}

int MathNode::getValue()
{
	switch (mathOperator)
	{
	case '+':
		return leftMO->getValue() + rightMO->getValue();
		break;
	case '-':
		return leftMO->getValue() - rightMO->getValue();
		break;
	case '*':
		return leftMO->getValue() * rightMO->getValue();
		break;
	case '/':
		return leftMO->getValue() / rightMO->getValue();
		break;
	default:
		break;
	}
}

void MathNode::printNode(int h)
{
	rightMO->printNode(h + 1);
	for (int i = 0; i < h; i++)
	{
		cout << "\t";
	}
	cout << mathOperator << endl;
	leftMO->printNode(h + 1);
}
