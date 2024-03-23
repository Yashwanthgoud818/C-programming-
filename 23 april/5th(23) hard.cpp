#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
bool isOpeningParenthesis(char c) {
    return (c == '(');
}
bool isClosingParenthesis(char c) {
    return (c == ')');
}
int precedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1; 
}
double applyOperation(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
        default: return 0.0; 
    }
}
double evaluateExpression(const std::string& expression) {
    std::stack<double> values;
    std::stack<char> operators;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0])) { 
            double operand = std::std(token);
            values.push(operand);
        } else if (isOperator(token[0])) { 
            char currentOperator = token[0];
            while (!operators.empty() && precedence(operators.top()) >= precedence(currentOperator)) {
                double operand2, operand1;
                if (values.empty()) {
                    std::cerr << "Invalid expression format" << std::endl;
                    return 0.0;
                }
                operand2 = values.top();
                values.pop();
                if (values.empty()) {
                    std::cerr << "Invalid expression format" << std::endl;
                    return 0.0;
                }
                operand1 = values.top();
                values.pop();
                char op = operators.top();
                operators.pop();
                double result = applyOperation(operand1, operand2, op);
                values.push(result);
            }
            operators.push(currentOperator);
        } else if (isOpeningParenthesis(token[0])) {
            operators.push(token[0]);
        } else if (isClosingParenthesis(token[0])) { 
                std::cerr << "Unbalanced parentheses" << std::endl;
                return 0.0;
            }
            while (!operators.empty() && !isOpeningParenthesis(operators.top())) {
                double operand2, operand1;
                if (values.empty()) {
                    std::cerr << "Invalid expression format" << std::endl;
                    return 0.0;
                }
                operand2 = values.top();
                values.pop();
                if (values.empty()) {
                    std::cerr << "Invalid expression format" << std::endl;
                    return 0.0;
                }
                operand1 = values.top();
                values.pop();
                char op = operators.top();
                operators.pop();
                double result = applyOperation(operand1, operand2, op);
                values.push(result);
            }
            if (!operators.empty() && isOpeningParenthesis(operators.top()))
                operators.pop();
                std::cerr << "Unbalanced parentheses" << std::endl;
                return 0.0;
            }
        }
    }
    while (!operators.empty()) {
        double operand2, operand1;
        if (values.empty()) {
            std::cerr << "Invalid expression format" << std::endl;
            return 0.0;
        }
        operand2 = values.top();
        values.pop();
        if (values.empty()) {
            std::cerr << "Invalid expression format" << std::endl;
            return 0.0;
        }
        operand1 = values.top();
        values.pop();
        char op = operators.top();
        operators.pop();
        double result = applyOperation(operand1, operand2, op);
        values.push(result);
    }

    if (values.size() == 1) {
        return values.top();
    } else {
        std::cerr << "Invalid expression format" << std::endl;
        return 0.0;
    }
}

int main() {
    std::string expression;
    std::cout << "Enter a mathematical expression: ";
    std::getline(std::cin, expression);

    double result = evaluateExpression(expression);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

