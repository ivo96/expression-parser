#include "NumNode.h"

NumNode::NumNode(int& val)
	: numValue(val)
{

}
int NumNode::getValue()
{
	return numValue;
}

void NumNode::printNode(int h)
{
	for (int i = 0; i < h; i++)
	{
		cout << "\t";
	}
	cout << numValue << endl;
}