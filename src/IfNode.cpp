#include "IfNode.hpp"
#include "BoolNode.hpp"
IfNode::IfNode()
	: ifOperator("if"),
	condition(nullptr),
	whenTrue(nullptr),
	whenFalse(nullptr)
{

}

IfNode::~IfNode()
{
	delete condition;
	delete whenTrue;
	delete whenFalse;
}

void IfNode::setCondition(BoolNode* cond)
{
	condition = cond;
}

void IfNode::setTrue(Node *tr)
{
	whenTrue = tr;
}

void IfNode::setFalse(Node* fls)
{
	whenFalse = fls;
}

void IfNode::printNode(int h)
{
	whenFalse->printNode(h + 1);
	cout << endl;
	whenTrue->printNode(h + 1);
	cout << endl;
	condition->printNode(h + 1);

	for (int i = 0; i < h; i++)
	{
		cout << "\t";
	}
	cout << ifOperator;
	cout << endl;
}

int IfNode::getValue()
{
	if (condition->getValue())
	{
		return whenTrue->getValue();
	}
	else
	{
		return whenFalse->getValue();
	}
}