#include <iostream>
using namespace std;

int main(){
    int a = 10;
    double b = 3.14;

    // Implicit typecasting
    double c = a + b; // a is implicitly converted to double (done automatically by the compiler)
    cout << "Result of implicit typecasting: " << c << endl;

    // Explicit typecasting
    int d = (int)b; // b is explicitly cast to int (done manually by the programmer)
    cout << "Result of explicit typecasting: " << d << endl;

    return 0;
}