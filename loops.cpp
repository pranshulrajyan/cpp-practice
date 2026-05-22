#include <iostream>
using namespace std;

//while loop
int main(){
    int i = 1;
    int n;
    cout << "enter a number";
    cin >> n;
    while (i <= n){
        cout << i << " ";
        i++;
        }
        cout << endl;
        return 0;
} 
// //for loop
// //for(initialization; condition; increment/decrement)
int main(){
    int i = 1;
    int n;
    cout << "enter an integer";
    cin >> n;
    for(i =1; i <=n; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
// //sum of numbers from 1 to n:
int main(){ //for loop to find the sum of numbers from 1 to n
    int i;
    int sum = 0;
    int n;
    cout << "input an integer";
    cin >> n;
    for(i = 1; i <=n; i++){
        sum += i;
    }
    cout<< "the sum till the input integer is" << sum << endl;
    return 0;
}
int main(){ //while loop to find the sum of numbers from 1 to n
    int i = 1;
    int sum = 0;
    int n;
    cout << "input an integer";
    cin >> n;
    while(i <= n){
        sum += i;
        i++;
        if(i == 5){
            break; //break statement to exit the loop when i is equal to 5      
        }
    }
    cout << "the sum till the input integer is" << sum << endl;
    return 0;
}
//sum of all odd numbers from 1 to n:
int main(){ //for loop to find the sum of odd numbers from 1 to n
    int i = 1;
    int n;
    cout << "input integer";
    cin >> n;
    int oddSum = 0;
    for(i = 1; i <=n ; i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout << "the sum of odd numbers till the input integer is" << oddSum << endl;
    return 0;
}
int main(){ //while loop to find the sum of odd numbers from 1 to n
    int i = 1;
    int n;
    cout << "input integer";
    cin >> n;
    int oddSum = 0;
    while(i <= n){
        if(i%2 != 0){
            oddSum += i;
        }
        i++;
    }
    cout << "the sum of odd numbers till the input integer is" << oddSum << endl;
    return 0;
}
// // do-while loop
 int main(){
    int i = 1;
    int n;
    cout << " enter an integer";
    cin >> n;
    do{
        cout << i << " ";
        i++;
    } while(i <= n);
      
    cout << endl;
    return 0;

    }
// check whether a number is prime or not?
int main(){
    int i = 2;
    int n;
    cout << "enter to check whether an integer is prime or not";
    cin >> n;
    bool isPrime = true;
    for(i = 2; i*i <=n; i++){
        if (n%i ==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "the integer is prime" << endl;
    }
    else{
        cout << "the integer is not prime" << endl;
    }   
    return 0;
}