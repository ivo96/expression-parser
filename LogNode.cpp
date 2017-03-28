#include "LogNode.h"

LogNode::LogNode()
	: logOperator("log"), numberLog(NULL), baseLog(NULL)
{

}

LogNode::~LogNode()
{
	delete numberLog;
	delete baseLog;
}

int LogNode::getValue()
{
	return ((log(numberLog->getValue())) / (log(baseLog->getValue())));
}

void LogNode::setNumber(Node *num)
{
	numberLog = num;
}

void LogNode::setBase(Node *bs)
{
	baseLog = bs;
}

void LogNode::printNode(int h)
{
	numberLog->printNode(h + 1);

	for (int i = 0; i < h; i++)
	{
		cout << "\t";
	}
	cout << logOperator << endl;
	baseLog->printNode(h + 1);
	cout << endl;
}