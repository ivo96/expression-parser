#include "LnNode.hpp"

LnNode::LnNode()
	: lnOperator("ln"), numberLn(NULL)
{

}

LnNode::~LnNode()
{
	delete numberLn;
}

void LnNode::setNumberLn(Node* num)
{
	numberLn = num;
}

int LnNode::getValue()
{
	return log2(double(numberLn->getValue()));
}

void LnNode::printNode(int h)
{
	numberLn->printNode(h + 1);
	for (int i = 0; i < h; i++)
	{
		cout << "\t";
	}
	cout << lnOperator << endl;

}