#pragma once
#include "Node.hpp"
#include "BoolNode.hpp"
#include "IfNode.hpp"
#include "MathNode.hpp"
#include "LnNode.hpp"
#include "LogNode.hpp"
#include "NumNode.hpp"


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