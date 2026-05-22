#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "enter first number:" << endl;
    cin >> a;
    cout << "enter second number:" << endl;
    cin >> b;
    int sum = a + b;
    int multiply = a * b;
    int divide = a / b;
    int subtract = a - b;
    cout << "the required sum is:" << sum << endl;
    cout << "the required product is:" << multiply << endl;
    cout << "the required quotient is:" << divide << endl;
    cout << "the required difference is:" << subtract << endl;
    return 0;
}