#pragma once
#include "Node.h"
#include "BoolNode.h"
#include "IfNode.h"
#include "MathNode.h"
#include "LnNode.h"
#include "LogNode.h"
#include "NumNode.h"


class Expression
{
private:
	int index;
	string expr;
	Node* root;
public:

	Expression(string expression);
	~Expression();

	Node* dblExpr();
	Node* addExpr();
	Node* multExpr();
	Node* numExpr();
	Node* parenthesesExpr();
	Node* ifNode();
	Node* logNode();
	Node* funcExpr();
	Node* natNumExpr();
	
	void parseExpression();
	void printExpression();
	void printEvaluatedExpression();
	void printParsedExpression();
	
};