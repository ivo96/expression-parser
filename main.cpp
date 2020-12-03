#include "./src/Expression.hpp"

int main()
{
	//string userInput;
	//getline(cin, userInput);
	Expression* expr = new Expression("98+if(log(56*3,32) > 98, 845*32,ln(37))");
	expr->parseExpression();
	expr->printExpression();
	cout << endl;
	expr->printParsedExpression();
	cout << endl << "Value is : ";
	expr->printEvaluatedExpression();
	cout << endl;
	return 0;
}

