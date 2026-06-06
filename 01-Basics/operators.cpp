#include <iostream>
using namespace std;
int main(){
    double a, b;
    cout << "enter first number:" << endl;
    cin >> a;
    cout << "enter second number:" << endl;
    cin >> b;
    //Arithmetic operators:
    double sum = a + b;
    double multiply = a * b;
    double divide = a / b;
    double subtract = a - b;
    double remainder = fmod(a, b);
    cout << "the required sum is:" << sum << endl;
    cout << "the required product is:" << multiply << endl;
    cout << "the required quotient is:" << divide << endl;
    cout << "the required difference is:" << subtract << endl;
    cout << "the required remainder is:" << remainder << endl;
    //Relational operators:
    bool equal = a == b;
    bool notEqual = a != b;
    bool lessThan = a < b;
    bool greaterThan = a > b;
    bool lessThanOrEqual = a <= b;
    bool greaterThanOrEqual = a >= b;
    cout << "the required equality is:" << equal << endl;
    cout << "the required inequality is:" << notEqual << endl;
    cout << "the required less-than is:" << lessThan << endl;
    cout << "the required greater-than is:" << greaterThan << endl;
    cout << "the required less-than-or-equal is:" << lessThanOrEqual << endl;
    cout << "the required greater-than-or-equal is:" << greaterThanOrEqual << endl;
    //Logical operators:
    bool andOp = (a>b) && (b<10);
    bool orOp = (a>5) || (b<10);
    bool notOp = !(a>b);
    cout << "the required logical AND is:" << andOp << endl;
    cout << "the required logical OR is:" << orOp << endl;
    cout << "the required logical NOT is:" << notOp << endl;
    return 0;
}