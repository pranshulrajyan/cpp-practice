#include <iostream>
using namespace std;

//if-else
int main(){
    int age;
    cout << "enter your age:" << endl;
    cin >> age;
    if (age>=18){
        cout << "you are eligible to drive a vehicle" << endl;
    }
    else {
        cout << "you are not eligible to drive a vehicle" << endl;
    }
    return 0;
}
//if-else-if-else
int main(){
    int marks;
    cout << " enter your secured marks:" << endl;
    cin >> marks;
    if (marks>=90){
        cout << "grade A\n";
    }
    else if ( 60 <= marks && marks <= 89 ){
        cout << "grade B\n";
    }
    else if ( 40 <= marks && marks <= 59 ){
        cout << "grade C\n";
    }
    else {
        cout << "grade D\n";
    }
    return 0;

}
int main(){
    int number;
    cout << "enter a number:" << endl;
    cin >> number;
    cout << "the number is " << ( number%2 == 0 ? "even" : "odd" ) << endl;
    return 0;
}