#include "Expression.hpp"

Node* Expression::dblExpr()
{
	return addExpr();
}

Node* Expression::addExpr()
{
	Node* left = multExpr();
	Node* add = nullptr;
	if (this->expr[this->index] == '+' || this->expr[this->index] == '-')
	{
		add = new MathNode(this->expr[this->index]);
		this->index++;
		add->setLeftMO(left);
		//delete left;
		Node* right = addExpr();
		add->setRightMO(right);
		//delete right;
	}
	if (add != nullptr)
	{
		return add;
	}
	return left;
}

Node* Expression::multExpr()
{
	Node* left = numExpr();
	Node* mult = nullptr;
	if (this->expr[this->index] == '*' || this->expr[this->index] == '/')
	{
		mult = new MathNode(this->expr[this->index]);
		mult->setLeftMO(left);
		this->index++;
		Node* right = multExpr();
		mult->setRightMO(right);
	}
	if (mult != nullptr)
	{
		return mult;
	}
	return left;
}

Node* Expression::numExpr()
{
	Node* numExpr = nullptr;
	numExpr = funcExpr();
	if (numExpr != nullptr)
	{
		return numExpr;
	}
	numExpr = natNumExpr();
	if (numExpr != nullptr)
	{
		return numExpr;
	}
	numExpr = parenthesesExpr();
	if (numExpr != nullptr)
	{
		return numExpr;
	}
	else
	{
		throw invalid_argument("Expression is not valid!");
	}
}
Node* Expression::parenthesesExpr()
{
	Node* par = nullptr;
	if (this->expr[this->index] == '(')
	{
		this->index++;
		par = dblExpr();
		this->index++;
	}
	return par;
}
Node* Expression::ifNode()
{
	Node* func = new IfNode();
	Node* left = dblExpr();
	BoolNode* cond = new BoolNode(this->expr[this->index]);
	cond->setLeftBO(left);

	this->index++;
	Node* right = dblExpr();
	cond->setRightBO(right);
	func->setCondition(cond);

	this->index++;
	Node* whenTrue = dblExpr();
	func->setTrue(whenTrue);

	this->index++;
	Node* whenFalse = dblExpr();
	func->setFalse(whenFalse);
	return func;
}

Node* Expression::logNode()
{
	Node* func = new LogNode();

	Node* base = dblExpr();
	func->setBase(base);

	this->index++;
	Node* num = dblExpr();
	func->setNumber(num);
	return func;
}

Node* Expression::funcExpr()
{
	Node* func = nullptr;
	if (this->expr[this->index] == 'l')
	{
		this->index++;
		if (this->expr[this->index] == 'n')
		{
			this->index++;
			if (this->expr[this->index] == '(')
			{
				this->index++;
				func = new LnNode();
				Node* num = dblExpr();
				func->setNumberLn(num);
				this->index++;				// because the index is on ')'
				return func;
			}

		}
		else if (this->expr[this->index] == 'o')
		{
			this->index++;
			if (this->expr[this->index] == 'g')
			{
				this->index++;
				if (this->expr[this->index] == '(')
				{
					this->index++;		// move after '('

					func = logNode();

					this->index++;		// because index is on ')'

					return func;
				}
			}
			else
			{
				throw invalid_argument("Expression is invalid!");
			}
		}
	}
	else if (this->expr[this->index] == 'i')
	{
		this->index++;
		if (this->expr[this->index] == 'f')
		{
			this->index++;

			if ((this->expr[this->index]) = '(')
			{
				this->index++;		// move after '('

				func = ifNode();

				this->index++;		// because index is on ')'
				return func;
			}
		}
	}
	return func;
}

Node* Expression::natNumExpr()
{
	Node* num = nullptr;
	if (isdigit(this->expr[this->index]))
	{
		string temp = "";
		while (isdigit(this->expr[this->index]))
		{
			temp += this->expr[this->index];
			this->index++;
		}
		int n = stoi(temp);
		num = new NumNode(n);
	}
	return num;
}

string removeSpaces(string input)
{
	string temp = "";
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != ' ')
		{
			temp += input[i];
		}
	}
	return temp;
}

Expression::Expression(string expression)
{
	this->index = 0;
	string temp = removeSpaces(expression);
	this->expr = temp;
	this->root = NULL;
}

void Expression::parseExpression()
{
	root = dblExpr();
	if (this->index < this->expr.length())
	{
		root = nullptr;
		throw invalid_argument("Expression is invalid!");
	}
}

void Expression::printExpression()
{
	cout << this->expr;
}

void Expression::printEvaluatedExpression()
{
	cout << root->getValue();
}

void Expression::printParsedExpression()
{
	root->printNode(0);
}

Expression::~Expression()
{
	delete root;
}